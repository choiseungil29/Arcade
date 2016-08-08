#pragma once

#include <string>

#include "cocos2d.h"
#include "BaseObject.h"

class Dong : public BaseObject {
public:
	virtual void update(float dt);
	virtual bool init();

	void reset();

	static Dong* create(const std::string& filename);
private:
};