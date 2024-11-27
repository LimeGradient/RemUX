#pragma once

#include <Geode/Geode.hpp>

using namespace geode::prelude;

class RemUXTableView : public TableView {
public:
    void scrollDown();
    void scrollUp();

    void setOriginalY(float ogY);
protected:
    float m_originalY;
};