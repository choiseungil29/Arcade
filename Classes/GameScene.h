#pragma once

#include <list>

#include "cocos2d.h"
#include "Character.h"
#include "Dong.h"
#include "DongPool.h"
#include "FilterManager.h"

using namespace cocos2d;

class GameScene : public Layer {
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(GameScene);

	void update(float dt);
private:
	Character* character;
	DongPool* pool;
	FilterManager<Dong*> *filter;
};