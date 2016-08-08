#include "SpawnManager.h"
using namespace cocos2d;
SpawnManager::SpawnManager(double interval) :
	interval(interval) {
}
SpawnManager::~SpawnManager() {
}
bool SpawnManager::init() {
	if (!Node::init()) {
		return false;
	}
	return true;
}