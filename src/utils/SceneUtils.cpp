#include "SceneUtils.hpp"

RemUXTableView* SceneUtils::getTableView() {
    if (auto listLayer = CCScene::get()->getChildByIDRecursive("GJListLayer")) {
        if (auto listView = listLayer->getChildByID("list-view")) {
            if (auto tableView = static_cast<RemUXTableView*>(listView->getChildByType<TableView>(0))) {
                tableView->setOriginalY(tableView->getPositionY());
                return tableView;
            }
        }
    }

    return nullptr;
}