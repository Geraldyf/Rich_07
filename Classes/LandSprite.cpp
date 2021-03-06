//
//  LandSprite.cpp
//  Richer
//
//  Created by Macbook Air on 9/1/15.
//
//

#include "LandSprite.h"

LandSprite* LandSprite::create(int type)
{
    LandSprite *sprite = new (std::nothrow) LandSprite();
    sprite->type = type;
    if (sprite && sprite->initWithFile(sprite->int2Img(type)))
    {
        sprite->autorelease();
        return sprite;
    }
    CC_SAFE_DELETE(sprite);
    return nullptr;
}

LandSprite* LandSprite::create()
{
    LandSprite *sprite = new (std::nothrow) LandSprite();
    sprite->type = LTYPE_NOTHING;
    if (sprite && sprite->init())
    {
        sprite->autorelease();
        return sprite;
    }
    CC_SAFE_DELETE(sprite);
    return nullptr;
}

std::string LandSprite::int2Img(int i) {
    switch (i) {
        case LTYPE_UNOCCUPIED: return "unoccupied.png";
        case LTYPE_SHOP: return "shop.png";
        case LTYPE_GIFT: return "gift.png";
        case LTYPE_MAGIC: return "magic.png";
        case LTYPE_HOSPITAL: return "hospital.png";
        case LTYPE_PRISON: return "prison.png";
        case LTYPE_MINE: return "mine.png";
        default: return "robot.png";
    }
}

LandSprite::LandSprite(){}

void LandSprite::setUp(int streetVal, int x, int y) {
    this->data = 0;
    this->streetVal = streetVal;
    this->p = Position(x, y);
    this->setScale(tileScale);
    this->setPosition(this->p.toRealPos());
}

void LandSprite::levelUp() {
    
}