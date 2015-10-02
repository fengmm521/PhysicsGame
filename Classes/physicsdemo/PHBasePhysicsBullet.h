//
//  PHBasePhysicsBullet.h
//  physicsdemo
//  精灵类，主要用来创建一些定制的精灵动画。
//  Created by woodcol on 15/10/2.
//
//

#ifndef __physicsdemo__PHBasePhysicsBullet__
#define __physicsdemo__PHBasePhysicsBullet__
#include "cocos2d.h"
#include "Box2dSprite.h"

class PHBasePhysicsBullet:public Box2dSprite
{
public:
     CREATE_FUNC(PHBasePhysicsBullet);
    virtual bool init();
};


#endif /* defined(__physicsdemo__PHBasePhysicsBullet__) */
