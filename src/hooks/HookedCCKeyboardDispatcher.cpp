#include <Geode/Geode.hpp>
#include <Geode/modify/CCKeyboardDispatcher.hpp>

#include "types/CustomTableView.hpp"
#include "utils/SceneUtils.hpp"

using namespace geode::prelude;

class $modify(RemUXKeyboardDispatcher, CCKeyboardDispatcher) {
    bool dispatchKeyboardMSG(enumKeyCodes key, bool down, bool arr) {
        if (down) {
            if (CCScene::get() == nullptr) return CCKeyboardDispatcher::dispatchKeyboardMSG(key, down, arr);
            auto tableView = SceneUtils::get()->getTableView();
            if (key == KEY_Down) {
                if (tableView != nullptr)
                    tableView->scrollDown();
            } if (key == KEY_Up) {
                if (tableView != nullptr)
                    tableView->scrollUp();
            }
        }

        return CCKeyboardDispatcher::dispatchKeyboardMSG(key, down, arr);
    }
};