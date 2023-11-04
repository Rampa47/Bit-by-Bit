#ifndef BILL_H
#define BILL_H

#include "BillComponent.h"

class BillPayer : public BillComponent{
    public:
        BillPayer(Order order, std::string payerName);
        std::string getPayerName();

    private:
        std::string payerName;
        Order customerOrder;
    
};

#endif