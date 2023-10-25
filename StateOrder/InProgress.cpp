#include "OrderState.h"
#include <iostream>
class InProgress : public OrderState
{

public:
   
     bool cook(OrderContext* oc, Order* o){
        std::cout<< " order in progress" <<std::endl;
        oc->setOrderState(new InProgress);
        return true;
    }
};


