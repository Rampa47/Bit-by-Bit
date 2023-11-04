#ifndef DELEGATIONBILL_H
#define DELEGATIONBILL_H

#include "BillComponent.h"

/**
 * @brief This class delegates the responsibility of calculating bill costs to its children.
 * A De
*/
class DelegationCompositeBill : public BillComponent{
    public:
        DelegationCompositeBill();

        /**
         * @brief parameterized constructor for Delegating Composite bill
         * @param bills a vector of shared pointers to bill objects
        */ 
        DelegationCompositeBill(std::vector<std::shared_ptr<BillComponent>> bills);
        void addBill(std::shared_ptr<BillComponent> bill);
        
    
    private:
        std::vector<BillComponent> bills;

};

#endif