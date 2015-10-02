//
//  PHBasePhysicsSprite.h
//  physicsdemo
//  精灵类，主要用来创建一些定制的精灵动画。
//  Created by woodcol on 15/10/2.
//
//

#ifndef __physicsdemo__PHBasePhysicsSprite__
#define __physicsdemo__PHBasePhysicsSprite__
#include "cocos2d.h"
#include "Box2dSprite.h"

class Box2dWordManger;

class PHBasePhysicsSprite:public Box2dSprite
{
public:
    CREATE_FUNC(PHBasePhysicsSprite);
    
    virtual bool init();
    virtual void initSpriteToBox2dWorld();
    
};

#endif /* defined(__physicsdemo__PHBasePhysicsSprite__) */
