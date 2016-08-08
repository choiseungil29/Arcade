#pragma once

#include "cocos2d.h"

using namespace cocos2d;

class BaseObject : public Sprite {
public:
	virtual void update(float dt);

protected:
	float xSpeed;
	float ySpeed;
};