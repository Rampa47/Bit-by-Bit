#ifndef BILLCOMPONENT_H
#define BILLCOMPONENT_H

#include <memory>
#include <string>
#include <vector>
#include <iostream> 

#include "../../Order.h"

class BillComponent{
    public:
        virtual void payAmountDue() =0;
        virtual int getTotalAmount()=0;
        virtual ~BillComponent();
};

#endif