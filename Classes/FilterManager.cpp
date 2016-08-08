#include "FIlterManager.h"

template <typename A>
FilterManager<A>::FilterManager() {
}

template <typename A>
FilterManager<A>::~FilterManager() {
}

template <typename A>
bool FilterManager<A>::intersectsForAllOfParent(Node* target) {
	for (auto child : getParent()->getChildren()) {
		if (dynamic_cast<A>(child) == NULL) {
			continue;
		}

		Rect targetRect = target->getBoundingBox();
		Rect childRect = child->getBoundingBox();

		if (targetRect.intersectsRect(childRect)) {
			return true;
		}
	}

	return false;
}