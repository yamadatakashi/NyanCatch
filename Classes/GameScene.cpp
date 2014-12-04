//
//  GameScene.cpp
//  NyanCatch
//
//  Created by 山田 卓史 on 2014/11/29.
//
//

#include "GameScene.h"
#include "SimpleAudioEngine.h"
#include "AppMacros.h"

CCScene* GameScene::scene()
{
    CCScene* scene = CCScene::create();
    GameScene* layer = GameScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool GameScene::init()
{
    if (!CCLayer::init()) {
        return false;
    }
    
    //背景を追加する
    createBackground();
    
    //ネコを表示する
    createCat();
    
    //スコアと残り時間を表示する
    createLabel();
    
    return true;
}

void GameScene::createBackground()
{
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    
    //背景を表示する
    CCSprite* pBgUnder = CCSprite::create("game_bg.png");
    pBgUnder->setPosition(ccp(winSize.width * 0.5, winSize.height * 0.5));
    this->addChild(pBgUnder, kZOrder_Background, kTag_BackGround);
}