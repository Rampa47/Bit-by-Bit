#ifndef BILL_H
#define BILL_H

#include "BillComponent.h"

class BillPayer : public BillComponent{
    public:
        BillPayer(std::shared_ptr<Order> order, std::string payerName); //if order is passed in from waiter/table
        BillPayer(int amount, std::string payerName); //if customer keeps order
        
        std::string getPayerName() const;

        ////////////Inherited///////////////////
        void payAmountDue();
        float getTotalAmount();
        

    private:
        int amount; //calculated from Order object
        std::string payerName;
        std::shared_ptr<Order> customerOrder;
    
};

#endif