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
protected:
    enum kTag
    {
        kTag_BackGround = 1,
        ktag_Basket,
        kTag_Basket_Front,
        kTag_Score,
        kTag_TimeLeft,
        kTag_Cat,
        
    };
    
    enum kZOrder
    {
        kZOrder_Background,
        kZOrder_Basket,
        kZOrder_Basket_Front,
        kZOrder_Cat,
        kZOrder_Score,
        kZOrder_TImeLeft,
    };
    
    CCLabelTTF* m_pScore_Ones;
    CCLabelTTF* m_pScore_Tenths;
    CCLabelTTF* m_pScore_Hundreds;
    CCLabelTTF* m_pTimeLeft_Ones;
    CCLabelTTF* m_pTimeLrft_Tenths;
    void createBackground();
    void createCat();
    void createLabel();
    

public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(GameScene);

};

#endif /* defined(__NyanCatch__GameScene__) */
