#include "DongPool.h"
DongPool::DongPool() : 
	SpawnManager(0.3) {
}
DongPool::~DongPool() {
}
bool DongPool::init()
{
	if (!SpawnManager::init()) {
		return false;
	}
	schedule(CC_SCHEDULE_SELECTOR(DongPool::spawn), getInterval());

	return true;
}
void DongPool::spawn(float dt) {
	Dong* dong = Dong::create("Dong.png");
	dong->init();

	this->getParent()->addChild(dong);
}
