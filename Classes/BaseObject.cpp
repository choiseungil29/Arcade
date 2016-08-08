#include "BaseObject.h"

using namespace cocos2d;

void BaseObject::update(float dt) {
	float x = this->getPositionX() + dt * xSpeed;
	float y = this->getPositionY() + dt * ySpeed;

	this->setPosition(x, y);
}
