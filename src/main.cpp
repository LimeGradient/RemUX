#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

#include <Geode/cocos/platform/win32/CXBOXController.h>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto application = CCApplication::get();
		if (application->m_pControllerHandler->m_controllerConnected) {
			log::info("controller connected!!");
		}

		return true;
	}
};
