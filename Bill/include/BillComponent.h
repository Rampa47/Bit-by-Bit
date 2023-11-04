#ifndef BILLCOMPONENT_H
#define BILLCOMPONENT_H

#include <memory>
#include <string>
#include <vector>

#include "../../Order.h"

class BillComponent{
    public:
        virtual void addBill(std::shared_ptr<BillComponent> bill) =0;
        virtual void payAmountDue() =0;
        virtual void calculateAmountDue()=0;
        virtual ~BillComponent();
};

#endif