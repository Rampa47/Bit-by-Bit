#ifndef DELEGATINGBILL_H
#define DELEGATINGBILL_H

#include "BillComponent.h"

/**
 * @brief This class delegates the responsibility of calculating bill costs to its children.
 * A De
*/
class DelegatingCompositeBill : public BillComponent{
    public:
        DelegatingCompositeBill();

        /**
         * @brief parameterized constructor for Delegating Composite bill
         * @param bills a vector of shared pointers to bill objects
        */ 
        DelegatingCompositeBill(std::vector<BillComponent*> bills);
        void addBill(BillComponent* bill);

        //////////////////inherited////////////////////////
        virtual string getBillReceipt();
        virtual float getTotalAmount();
        
        
    
    private:
        std::vector<BillComponent*> bills;

};

#endif