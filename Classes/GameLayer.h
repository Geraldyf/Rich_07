//
//  GameLayer.h
//  Richer
//
//  Created by Macbook Air on 9/1/15.
//
//

#ifndef __Richer__GameLayer__
#define __Richer__GameLayer__

#include "Richer.h"
#include "PlayerSprite.h"
#include "LandSprite.h"

class GameLayer : public cocos2d::Layer
{
    Vector<PlayerSprite *> playerSprites;
    
public:
    static cocos2d::Scene* createScene(int pnum[4], int fund = 10000);
    static GameLayer *create(int pnum[4], int fund = 10000);
    GameLayer();
    ~GameLayer();
    
    void update(float dt);
    
};

#endif /* defined(__Richer__GameLayer__) */