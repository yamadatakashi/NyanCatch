//
//  GameScene.h
//  NyanCatch
//
//  Created by 山田 卓史 on 2014/11/29.
//
//

#ifndef __NyanCatch__GameScene__
#define __NyanCatch__GameScene__

#include <stdio.h>

#include "cocos2d.h"

USING_NS_CC;

class GameScene : public cocos2d::CCLayer
{

public:    
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(GameScene);

};

#endif /* defined(__NyanCatch__GameScene__) */
