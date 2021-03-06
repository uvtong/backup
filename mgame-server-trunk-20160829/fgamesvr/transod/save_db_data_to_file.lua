local skynet = require "skynet"
local utils = require "utils"
local logger = require "logger"
local mysql = require "mysql"
local redis = require "redis"
local cjson = require "cjson"

local mysql_db
local redis_db

local mysql_cfg = {
    host            = "127.0.0.1",--"10.66.140.49",
    port            = 3306,
    user            = "root",
    password        = "root",--"MeiweiZZ0321",
    database        = "qq_fgame",
    max_packet_size = 1024*1024,
}

local redis_cfg = {
    is_id_redis = true,
    id          = 1,
    name        = "redis",
    host        = "127.0.0.1",--"10.66.125.63",
    port        = 6379 ,
    db          = 0,
    --auth        = "crs-8vg42ila:MeiweiZZ0321",
}

local save_keys = {
}
save_keys["gift_type"] = 1


local function init_mysql_db()
    mysql_db = mysql.connect(mysql_cfg)
    assert(mysql_db, "mysql_db is not connect!")
end

local function init_redis_db()
    redis_db = redis.connect(redis_cfg)
    assert(redis_db, "redis_db is not connect!")
end

local function save_db_data_to_file()
    local data = {}
    for k, _ in pairs(save_keys) do
        local ktype = redis_db:type(k)
        if ktype == "string" then
            data[k] = redis_db:get(k)
        elseif ktype == "hash" then
            data[k] = {}
            local tmp = redis_db:hgetall(k)
            local len = #tmp / 2
            for i = 1, len do
                local k2 = tmp[i * 2 - 1]
                local dat = tmp[i * 2]
                data[k][k2] = dat
            end
        end
    end
    local jstr = cjson.encode(data)
    
    local f = io.output("./transod/db_data.json")
    f:write(jstr)
    f:close()
    print(jstr)
end

local function init()
    init_redis_db()
    init_mysql_db()
    save_db_data_to_file()
end


local CMD = {}

skynet.start(function()
    logger.trace("clear_tencent_data start...")

    init()

    local traceback = debug.traceback

    skynet.dispatch("lua", function(_, src, command, ...)
        local f = CMD[command]
        if not f then
            logger.warningf("unhandled message(%s)", command)
            return skynet.ret()
        end

        local ok, ret = xpcall(f, traceback, ...)
        if not ok then
            logger.warningf("handle message(%s) failed : %s src:%d", command, ret, src)
            return skynet.ret()
        end
        skynet.retpack(ret)
    end)
end)