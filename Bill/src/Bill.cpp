#include "Bill.h"

/**
 * @brief Parameterzed constructor for BillPayer class
 * @param order the order that the customer receives
 * @param payerName the name of the customer
*/
BillPayer::BillPayer(std::shared_ptr<Order> order, std::string payerName){
    //Extract order amount from food items in order/interact with menu
    this->payerName = payerName;
}

/**
 * @brief Parameterzed constructor for BillPayer class
 * @param amount the price of all food items in the order of a customer
 * @param payerName the name of the customer
*/
BillPayer::BillPayer(int amount, std::string payerName){
    this->amount = amount;
    this->payerName = payerName;
}

/**
 * @brief Displays how much the customer pays for their own meal
*/
void BillPayer::payAmountDue(){
    //If Order object is passed in, this function will give a breakdown of the customer's order
    //food item by food item
    std::cout << payerName << " pays R" << amount << " for their meal";
}

int BillPayer::getTotalAmount(){
    return amount;
}