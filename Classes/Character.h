#pragma once

#include <string>

#include "BaseObject.h"
#include "cocos2d.h"

class Character : public BaseObject {
public:
	virtual void update(float dt);
	virtual bool onTouchBegan(Touch* touch, Event* unused_event);
	virtual bool init();

	static Character* create(const std::string& filename);
private:
};