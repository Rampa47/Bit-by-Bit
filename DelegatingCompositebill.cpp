#include "DelegatingCompositebill.h"

/**
 * @brief default DelegatingCompositeBill constructor
*/
DelegatingCompositeBill::DelegatingCompositeBill(){}  

/**
 * @brief parameterized constructor
 * @param bills vector of sub-bills 
*/
DelegatingCompositeBill::DelegatingCompositeBill(std::vector<BillComponent*> bills){
    this->bills = bills;
}

/**
 * @brief Adds bill to the current instance's sub-bill vector
*/
void DelegatingCompositeBill::addBill(BillComponent* bill){
    this->bills.push_back(bill);
} 


/**
 * @brief This method returns compiled receipt from sub-bills
*/
std::string DelegatingCompositeBill::getBillReceipt(){
    stringstream ss;
    std::string temp = "";

    for(auto bill : bills){
        ss << bill->getBillReceipt() << std::endl;
    }
    temp += ss.str();
    return temp;
}

/**
 * @brief Returns the total amount due and/or paid for sub-bills 
*/
float DelegatingCompositeBill::getTotalAmount(){
    float total = 0.0;
    for(auto bill : bills){
        total += bill->getTotalAmount();
    }
    return total;
}

DelegatingCompositeBill::~DelegatingCompositeBill(){
    
    for(auto bill : bills){
        delete bill;
    }
    //std::cout << "delegating composite structure destroyed" << std::endl;
}