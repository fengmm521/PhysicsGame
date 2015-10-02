//
//  WarScenceLayer.h
//  physicsdemo
//
//  Created by woodcol on 15/10/2.
//
//
//资源加载适合cocos2d-x 3.2版本的cocostudio for mac 1.0.0
//战斗场景,当前类中存放地图，子弹，所有精灵，以及战斗UI界面

#ifndef __physicsdemo__WarScenceLayer__
#define __physicsdemo__WarScenceLayer__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "editor-support/cocostudio/CocoStudio.h"
USING_NS_CC;
using namespace ui;
using namespace cocostudio;
class WarScenceLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    // a selector callback
    void menuTouchCallback(cocos2d::Ref* pSender);
    // implement the "static create()" method manually
    CREATE_FUNC(WarScenceLayer);
    //button event
    void touchEvent(cocos2d::Ref *pSender, Widget::TouchEventType type);
};

#endif /* defined(__physicsdemo__WarScenceLayer__) */
