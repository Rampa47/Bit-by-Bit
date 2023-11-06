#include "BillComponent.h"

std::string BillComponent::getBillReceipt(){}
float BillComponent::getTotalAmount(){}
BillComponent::~BillComponent(){}

/**
 * @brief this method indicates weather or not a tab should be opened
 * @param open whether or not a tab should be opened. true indicates the tab should be opened, false indicates that it should not
 * @note this method should only be called (on the root node) once the entire composite structure has been created
*/
void BillComponent::openTab(bool open){
    this->tab = open;
}

/**
 * @brief indicates weather or not a tab is opened
 * @return whether or not a tab is opened. true indicates the tab is opened, false indicates that is not
*/
bool BillComponent::isTab() const{
    return this->tab;
}