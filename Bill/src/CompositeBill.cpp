#include "../include/CompositeBill.h"

/**
 * @brief parameterized constructor for CompositeBillPayer
 * @param payerName The name of the customer paying for other customers' orders
*/
CompositeBillPayer::CompositeBillPayer(std::string payerName){
    this->payerName = payerName;
}

/**
 * @brief parameterized constructor for CompositeBillPayer
 * @param payerName The name of the customer paying for other customers' orders
 * @param bills The bills for which this class instance will pay
*/
CompositeBillPayer::CompositeBillPayer(std::string payerName, std::vector<BillPayer*> bills){
    this->payerName = payerName; 
    this->bills = bills;
}

/**
 * @brief Adds sub-bill which a CompositeBillPayer instance will pay for
*/
void CompositeBillPayer::addBill(BillPayer* bill){
    bills.push_back(bill);
}

/**
 * @brief Displays order payment for multiple customers
*/
std::string CompositeBillPayer::getBillReceipt(){
    //loop through sub-bills
    //go through each order item and output
    //Payed by this->payerName
    stringstream ss;
    std::string temp;

    ss << payerName << " pays R" << getTotalAmount() << " for the meals of:" << std::endl;

    for(auto bill : bills){
        ss << "-> (R" << bill->getTotalAmount() << ") " << bill->getPayerName() << std::endl;
    }
    ss << std::endl;
    temp += ss.str();

    return temp;
}

/**
 * @brief calculates the sum of the order cost of each sub-bill
 * @returns Sum of payer and payee orders
*/
float CompositeBillPayer::getTotalAmount(){
    float amountSum = 0.0;
    
    for(auto bill : bills){
        amountSum += bill->getTotalAmount(); 
    }

    return amountSum;
}

CompositeBillPayer::~CompositeBillPayer(){
    for(auto bill : bills){
        delete bill;
    }
    std::cout << "composite bill payer destroyed" << std::endl;
}