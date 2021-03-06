#include "BuyMedicalPanel.h"
#include "ClientSvrMsg.pb.h"
#include "ConstHelper.h"
#include "tip/TipControl.h"
#include "bag/BagControl.h"
#include "IconFrameCell.h"
#include "ItemUtils.h"
#include "defines.h"

#include "ItemCfgMaster.h"

const string CBuyMedicalPanel::BUY_MEDICAL_SUCCESS_EVENT = "buy_medical_success_event";
const string CBuyMedicalPanel::CANCEL_BUY_MEDICAL_EVENT = "cancel_buy_medical_event";

CBuyMedicalPanel::CBuyMedicalPanel(){
	m_uCfgID = 0;
	m_uOneCost = 0;
	m_uTenCost = 0;
	m_bIsBuyOne = true;
	m_bIsCostGold = false;

	m_pTarget = NULL;
	m_pEventSelector = NULL;
}

CBuyMedicalPanel::~CBuyMedicalPanel(){

}

bool CBuyMedicalPanel::init(){
	bool bRet = false;

	do 
	{
		CC_BREAK_IF(!BasePanel::init());

		initLayoutFromJsonFile("ui_v2/buy_item_panel_ui.ExportJson");
		addChild(m_pRootLayout);

		setClickOutToClose(false);

		initUI();

		bRet = true;
	} while (0);

	return bRet;
}

void CBuyMedicalPanel::initUI(){
	m_pCloseBtn = dynamic_cast<Button*>(m_pRootLayout->getChildByName("close_btn"));
	m_pCloseBtn->addTouchEventListener(this, toucheventselector(CBuyMedicalPanel::touchEventHandler));

	m_pBuyOneBtn = dynamic_cast<Button*>(m_pRootLayout->getChildByName("buy_one_btn"));
	m_pBuyOneBtn->addTouchEventListener(this, toucheventselector(CBuyMedicalPanel::touchEventHandler));

	m_pBuyTenBtn = dynamic_cast<Button*>(m_pRootLayout->getChildByName("buy_ten_btn"));
	m_pBuyTenBtn->addTouchEventListener(this, toucheventselector(CBuyMedicalPanel::touchEventHandler));

	m_pIconImg = dynamic_cast<ImageView*>(m_pRootLayout->getChildByName("icon_img"));
	m_pOneCoinImg = dynamic_cast<ImageView*>(m_pRootLayout->getChildByName("coin_icon"));
	m_pTenCoinImg = dynamic_cast<ImageView*>(m_pRootLayout->getChildByName("coin_icon_0"));

	m_pIconFrameCell = IconFrameCell::create();
	m_pIconImg->addChild(m_pIconFrameCell);

	m_pDescTxt = dynamic_cast<Label*>(m_pRootLayout->getChildByName("desc_txt"));
	m_pBuyOneTxt = dynamic_cast<Label*>(m_pRootLayout->getChildByName("buy_one_cost_txt"));
	m_pBuyTenTxt = dynamic_cast<Label*>(m_pRootLayout->getChildByName("buy_ten_cost_txt"));

	m_uCfgID = ConstHelper(FIGHT_MEDICAL_CFG_DI);

	updateUI();
}

void CBuyMedicalPanel::updateUI(){
	string iconStr = ItemUtils::getItemIcon(vmsg::THING_TYPE_ITEM, m_uCfgID);
	m_pIconFrameCell->setInfo(vmsg::THING_TYPE_ITEM, m_uCfgID);
	//m_pIconImg->loadTexture(iconStr.c_str());

	m_pDescTxt->setText(ItemUtils::getItemDesc(vmsg::THING_TYPE_ITEM, m_uCfgID));

	const ItemCfg* stCfg = ITEM_CFG_MASTER->GetItemCfgByID(m_uCfgID);
	if(stCfg == NULL){
		return;
	}
	m_uOneCost = stCfg->buyprice();
	unsigned int uBaseNum = stCfg->discountthreshold();		//折扣起始点
	if(uBaseNum <= 10){   //表示10在折扣内
		m_uTenCost = m_uOneCost*10*(stCfg->discount()*1.0/EGAME_DENOM);
	}else{
		m_uTenCost = m_uOneCost*10;
	}

	m_pBuyOneTxt->setText(intToString(m_uOneCost));
	m_pBuyTenTxt->setText(intToString(m_uTenCost));
}

void CBuyMedicalPanel::touchEventHandler(CCObject *pSender, TouchEventType type){
	UIWidget *pWidget = dynamic_cast<UIWidget*>(pSender);
	const char *pszWidgetName = pWidget->getName();
	string strWidgetName = pWidget->getName();

	switch (type) {
	case TOUCH_EVENT_ENDED:
		if(strcmp(pszWidgetName, "close_btn") == 0) {
			DispatchEvent(CANCEL_BUY_MEDICAL_EVENT, this);
			this->close();
		}else if(strcmp(pszWidgetName, "buy_one_btn") == 0) {
			m_bIsBuyOne = true;
			doBuy();
		}else if(strcmp(pszWidgetName, "buy_ten_btn") == 0) {
			m_bIsBuyOne = false;
			doBuy();
		}
		break;
	default:

		break;
	}
}

void CBuyMedicalPanel::doBuy(){
	unsigned int uCost = m_bIsBuyOne?m_uOneCost:m_uTenCost;
	unsigned int uCnt = m_bIsBuyOne?1:10;

	string descStr = TextStr(TEXT_BUY_ITEM_GOLD_TIP);
	descStr += ItemUtils::getItemName(vmsg::THING_TYPE_ITEM, m_uCfgID);

	if(m_bIsCostGold){  //使用星钻
		P_TIP_CTRL->GoldCostTip(uCost, this, dialogbtneventselector(CBuyMedicalPanel::buyItemFun), descStr, uCnt);
	}else{
		if(P_TIP_CTRL->CoinCostTip(uCost, this)){
			P_BAG_CTRL->sendBuyItemRqst(vmsg::THING_TYPE_ITEM, m_uCfgID, uCnt);
			this->showLoading();
		}
	}
}


void CBuyMedicalPanel::buyItemFun(){
	unsigned int uCnt = m_bIsBuyOne?1:10;
	P_BAG_CTRL->sendBuyItemRqst(vmsg::THING_TYPE_ITEM, m_uCfgID, uCnt);

	this->showLoading();
}

void CBuyMedicalPanel::openWithCallFun(CCObject* target, SEL_CallFunc callbackFun){
	m_pTarget = target;
	m_pEventSelector = callbackFun;

	open();
}

void CBuyMedicalPanel::doBuyMedicalDone(){
	DispatchEvent(BUY_MEDICAL_SUCCESS_EVENT, this);
	this->close();
}

void CBuyMedicalPanel::open(){
	BasePanel::open();
}

void CBuyMedicalPanel::close(){
	BasePanel::close();

	if(this->getIsInLoading()){
		this->closeLoading();
	}

	if(m_pTarget && m_pEventSelector){
		(m_pTarget->*m_pEventSelector)();
	} 

	m_pTarget = NULL;
	m_pEventSelector = NULL;
}

