//
//  Ball.hpp
//  arinoid
//
//  Created by Francisco Sanchez on 2/17/21.
//

#ifndef Ball_hpp
#define Ball_hpp

#include "cocos2d.h"

#define BALL_TAG 0x31

class Ball : public cocos2d::Sprite
{
public:
    virtual bool init();
    CREATE_FUNC(Ball);
};

#endif /* Ball_hpp */