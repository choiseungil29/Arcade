#include <stdlib.h>
#include <time.h>

#include "GameScene.h"

#include "FilterManager.cpp"

using namespace cocos2d;

Scene* GameScene::createScene() {
	auto scene = Scene::create();
	auto layer = GameScene::create();

	scene->addChild(layer);

	return scene;
}

bool GameScene::init() {
	if (!Layer::init()) {
		return false;
	}

	srand((unsigned int)time(NULL));

	this->character = Character::create("Character.png");
	this->character->init();

	this->addChild(this->character);

	pool = DongPool::create();
	this->addChild(pool);

	filter = FilterManager<Dong*>::create();
	this->addChild(filter);

	schedule(CC_SCHEDULE_SELECTOR(GameScene::update), 0);

	return true;
}

void GameScene::update(float dt) {
	if (filter->intersectsForAllOfParent(character)) {
		Director::getInstance()->end();
	}

	if (filter2->intersectsForAllOfParent(character)) {
		hp++;
	}
}