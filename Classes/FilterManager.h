#pragma once

#include "cocos2d.h"

using namespace cocos2d;

template <typename A>
class FilterManager : public Node {
public:
	FilterManager();
	~FilterManager();

	CREATE_FUNC(FilterManager<A>);

	bool intersectsForAllOfParent(Node* target);
private:
};