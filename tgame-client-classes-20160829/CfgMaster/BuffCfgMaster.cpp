#include "BuffCfgMaster.h"

#include <set>

using std::set;

int CBuffCfgMaster::ValidateCfg()const
{
    int iRet = 0;


    set<unsigned int> stItemIDSet;

    for(int iIdx = 0; iIdx < m_stCfg.buffcfg_size(); iIdx++)
    {
        unsigned int uiCfgID = m_stCfg.buffcfg(iIdx).buffid();
        if(stItemIDSet.insert(uiCfgID).second == false)
        {
            CV_ERROR(("%s, cfgid = %u is dup cfg id !",
                __PRETTY_FUNCTION__, uiCfgID));
            return -1;//id�ظ�
        }

        //to add other validate check, such as skill etc.
    }
    return iRet;
}

int CBuffCfgMaster::SetCfg()
{
    int iRet = 0;

    for(int iIdx = 0; iIdx < m_stCfg.buffcfg_size(); iIdx++)
    {
        unsigned int uiCfgID = m_stCfg.buffcfg(iIdx).buffid();
        if(m_stID2IDX.insert(make_pair(uiCfgID, iIdx)).second == false)
        {
            CV_ERROR(("%s, cfgid = %u is dup cfg id !",
                __PRETTY_FUNCTION__, uiCfgID));
            return -1;//id�ظ�
        }
    }

    return iRet;
}

BuffCfg* CBuffCfgMaster::GetBuffCfgByID(const unsigned int uiCfgID)
{
    map<unsigned int, int>::const_iterator it = m_stID2IDX.find(uiCfgID);

    if(it == m_stID2IDX.end())
    {
        CV_ERROR(("%s, can not find cfgid = %u item", __PRETTY_FUNCTION__, uiCfgID));
        return NULL; //�Ҳ�������Ʒ����
    }

    return m_stCfg.mutable_buffcfg(it->second);
}