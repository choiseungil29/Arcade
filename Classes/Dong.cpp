#include <stdlib.h>

#include "Dong.h"

using namespace cocos2d;

Dong* Dong::create(const std::string& filename) {
	Dong* dong = new Dong();
	if (dong->initWithFile(filename)) {
		dong->autorelease();
		return dong;
	}

	CC_SAFE_DELETE(dong);
	return NULL;
}

bool Dong::init() {

	reset();
	this->xSpeed = 0;

	this->schedule(CC_SCHEDULE_SELECTOR(Dong::update), 0);

	return true;
}

void Dong::reset() {
	this->setPosition(
		rand() % (int)Director::getInstance()->getVisibleSize().width, 
		Director::getInstance()->getVisibleSize().height + rand()%100);
	this->ySpeed = -(rand() % 20 + 150);
}

void Dong::update(float dt) {
	BaseObject::update(dt);

	if (this->getPositionY() < 0) {
		this->getParent()->removeChild(this);
	}
}