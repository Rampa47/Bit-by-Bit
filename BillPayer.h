#ifndef BILL_H
#define BILL_H

#include "BillComponent.h"

class BillPayer : public BillComponent
{
    public:
        BillPayer(float amount, std::string payerName); //if order is passed in from waiter/table 
        
        std::string getPayerName() const;

        ////////////Inherited///////////////////
        std::string getBillReceipt();
        float getTotalAmount();
        ~BillPayer();
        

    private:
        float amount; //calculated from Order object
        std::string payerName;
};

#endif