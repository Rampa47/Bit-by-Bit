#ifndef BILLCOMPONENT_H
#define BILLCOMPONENT_H

#include <memory>
#include <string>
#include <vector>
#include <iostream> 
#include <sstream>

#include "../../Order.h"

class BillComponent{
    public:
        virtual std::string getBillReceipt() =0;
        virtual float getTotalAmount()=0;
        virtual ~BillComponent();
        void openTab(bool value);
        bool isTab() const;

    private:
        bool openTab;
};

#endif