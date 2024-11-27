#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

#include <Geode/cocos/platform/win32/CXBOXController.h>
#include <Geode/cocos/draw_nodes/CCDrawingPrimitives.h>

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

		auto drawNode = CCDrawNode::create();
		this->addChild(drawNode);

		drawNode->drawRect(ccp(50, 50), ccp(100, 100), ccc4f(127, 127, 127, 255), 5.f, ccc4f(0, 0, 0, 255));

		return true;
	}
};