//
//  PHTiledPhysicsMap.cpp
//  physicsdemo
//
//  Created by woodcol on 15/10/2.
//
//资源加载适合cocos2d-x 3.2版本的cocostudio for mac 1.0.0
//

#include "PHTiledPhysicsMap.h"
#include "strHash.h"
USING_NS_CC;
using namespace ui;
using namespace std;
// on "init" you need to initialize your instance
bool PHTiledPhysicsMap::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
//    Node* rootNode =cocostudio::timeline::NodeReader::getInstance()->createNode("CJDHMainUI_1/CJDHMainUI_1.json");
//    this->addChild(rootNode,0);
//    
//    
//    auto gamestartBtn = dynamic_cast<Button*>(rootNode->getChildByName("gameStart_Button"));
//    gamestartBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
//    auto gameSetBtn = dynamic_cast<Button*>(rootNode->getChildByName("gameSet_Button"));
//    gameSetBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
//    auto mailBtn = dynamic_cast<Button*>(rootNode->getChildByName("mail_Button"));
//    mailBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
//    auto shopBtn = dynamic_cast<Button*>(rootNode->getChildByName("shop_Button"));
//    shopBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
//    auto gameCenterBtn = dynamic_cast<Button*>(rootNode->getChildByName("gameCenter_Button"));
//    gameCenterBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
//    auto paihangbangBtn = dynamic_cast<Button*>(rootNode->getChildByName("paiHangBang_Button"));
//    paihangbangBtn->addTouchEventListener(CC_CALLBACK_2(PHTiledPhysicsMap::touchEvent, this));
//    
    
    return true;
}
void PHTiledPhysicsMap::touchEvent(cocos2d::Ref *pSender, Widget::TouchEventType type)
{
    //字符串作为case
    
    
//    if (type == Widget::TouchEventType::ENDED) {
//        Button* btntmp = dynamic_cast<Button*>(pSender);
//        string buttonname = btntmp->getName();
//        
//        switch(hash_(buttonname.c_str())){
//            case "gameStart_Button"_hash:
//                
//                break;
//            case "gameSet_Button"_hash:
//                
//                break;
//            case "mail_Button"_hash:
//                
//                break;
//            case "shop_Button"_hash:
//                
//                break;
//            case "gameCenter_Button"_hash:
//                
//                break;
//            case "paiHangBang_Button"_hash:
//                
//                break;
//            default:
//                break;
//                
//        }
//    }
    
    
    
    //    //按下、移动、结束、取消
    //    switch (type)
    //    {
    //        case Widget::TouchEventType::ENDED:
    //           // m_pDisplayValueLabel->setText(CCString::createWithFormat("Touch Down")->getCString());
    //            break;
    //        case Widget::TouchEventType::BEGAN:
    //           // m_pDisplayValueLabel->setText(CCString::createWithFormat("Touch Move")->getCString());
    //            break;
    //
    //        case Widget::TouchEventType::MOVED:
    //           // m_pDisplayValueLabel->setText(CCString::createWithFormat("Touch Up")->getCString());
    //            break;
    //
    //        case Widget::TouchEventType::CANCELED:
    //            //m_pDisplayValueLabel->setText(CCString::createWithFormat("Touch Cancelled")->getCString());
    //            break;
    //            
    //        default:
    //            break;
    //    }
}
//Layer界面中的按钮被点击时运行的方法
void PHTiledPhysicsMap::menuTouchCallback(Ref* pSender)
{
   
    
    
}