#include "Character.h"

using namespace cocos2d;

Character* Character::create(const std::string& filename) {
	Character* character = new Character();
	if (character->initWithFile(filename)) {
		character->autorelease();
		return character;
	}

	CC_SAFE_DELETE(character);
	return NULL;
}

bool Character::init() {
	this->schedule(CC_SCHEDULE_SELECTOR(Character::update), 0);

	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(Character::onTouchBegan, this);

	Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(listener, 1);

	this->xSpeed = 100;
	this->ySpeed = 0;

	this->setPosition(512, this->getContentSize().height/2);

	return true;
}

void Character::update(float dt) {
	BaseObject::update(dt);
}

bool Character::onTouchBegan(Touch* touch, Event* unused_event) {
	this->xSpeed *= -1;

	return true;
}