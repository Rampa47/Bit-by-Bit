#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"


/**
 * @brief This class models how a customer (or customers) can choose to pay the meal costs for multiple other customers.
*/
class CompositeBillPayer : BillComponent{
    public:
        /**
         * @brief parameterized constructor for Composite bill
         * @param payerName the name of the customer paying the costs for all sub-bills (other customer bills)
        */ 
        CompositeBillPayer(std::string payerName);

        /**
         * @brief parameterized constructor for Composite bill
         * @param bills a vector of shared pointers to bill objects
        */ 
        CompositeBillPayer(std::string payerName, std::vector<std::shared_ptr<BillPayer>> bills);
        void addBill(std::shared_ptr<BillPayer> bill);

        ////////////Inherited///////////////////
        void payAmountDue();
        float getTotalAmount();
        
    
    private:
        std::vector<std::shared_ptr<BillPayer>> bills;
        std::string payerName;
};

#endif