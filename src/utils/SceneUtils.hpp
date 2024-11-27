#pragma once

#include <Geode/Geode.hpp>

#include "types/CustomTableView.hpp"

using namespace geode::prelude;

class SceneUtils {
public:
    static SceneUtils* get() {
        static SceneUtils* instance;
        return instance;
    }

    RemUXTableView* getTableView();
};