#include "../include/Bill.h"

/**
 * @brief Parameterized constructor for BillPayer class
 * @param amount the price of all food items in the order of a customer
 * @param payerName the name of the customer
*/
BillPayer::BillPayer(float amount, std::string payerName){
    this->amount = amount;
    this->payerName = payerName;
}

/**
 * @brief Displays how much the customer pays for their own meal
*/
std::string BillPayer::getBillReceipt(){
    //If Order object is passed in, this function will give a breakdown of the customer's order
    //food item by food item
    stringstream ss;
    std::string temp;
    ss << payerName << " pays R" << amount << " for their meal" << std::endl;

    temp += ss.str();
    return temp;
    
}

/**
 * @brief Returns the cost of the customer's order
*/
float BillPayer::getTotalAmount(){
    return amount;
}

/**
 * @brief returns the name of the payer of their specific order
 * @return payerName
*/
std::string BillPayer::getPayerName() const {
    return this->payerName;
}

BillPayer::~BillPayer(){
    std::cout << "bill payer destroyed" << std::endl;
}