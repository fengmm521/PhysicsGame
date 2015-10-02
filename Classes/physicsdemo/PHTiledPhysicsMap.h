//
//  PHTiledPhysicsMap.h
//  physicsdemo
//
//  Created by woodcol on 15/10/2.
//
//
//资源加载适合cocos2d-x 3.2版本的cocostudio for mac 1.0.0
//

#ifndef __physicsdemo__PHTiledPhysicsMap__
#define __physicsdemo__PHTiledPhysicsMap__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "editor-support/cocostudio/CocoStudio.h"
USING_NS_CC;
using namespace ui;
using namespace cocostudio;
class PHTiledPhysicsMap : public cocos2d::Layer
{
public:
    virtual bool init();
    

    static PHTiledPhysicsMap* createWithTiledFile(std::string xmlfile);
    
    void initPhysicsTiledBox2dOjbecit();
    
    
    //button event
    void touchEvent(cocos2d::Ref *pSender, Widget::TouchEventType type);
    // a selector callback
    void menuTouchCallback(cocos2d::Ref* pSender);
};

#endif /* defined(__physicsdemo__PHTiledPhysicsMap__) */
