#pragma once
#include "Dong.h"
#include "SpawnManager.h"
class DongPool : public SpawnManager {
public:
	DongPool();
	~DongPool();
	CREATE_FUNC(DongPool);
	bool init() override;
	void spawn(float dt) override;
private:
};