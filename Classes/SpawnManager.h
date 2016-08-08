#pragma once
#include "cocos2d.h"
using namespace cocos2d;
class SpawnManager : public Node {
public:
	SpawnManager(double interval);
	~SpawnManager();

	bool init() override;

	virtual void spawn(float dt) = 0;

	double getInterval() { return interval; }
private:
	double interval;
};