#include "CustomTableView.hpp"

void RemUXTableView::scrollDown() {
    this->m_contentLayer->setPosition(ccp(
        this->m_contentLayer->getPositionX(),
        (this->m_contentLayer->getPositionY() <= 0) ? this->m_contentLayer->getPositionY() + 50.f : this->m_contentLayer->getPositionY()
    ));
}

void RemUXTableView::scrollUp() {
    this->m_contentLayer->setPosition(ccp(
        this->m_contentLayer->getPositionX(),
        this->m_contentLayer->getPositionY() - 50.f
    ));
}

void RemUXTableView::setOriginalY(float ogY) {
    this->m_originalY = ogY;
}