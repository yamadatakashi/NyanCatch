//
//  GameScene.cpp
//  NyanCatch
//
//  Created by 山田 卓史 on 2014/11/29.
//
//

#include "GameScene.h"

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
    
    return true;
}