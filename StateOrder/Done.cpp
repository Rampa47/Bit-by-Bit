#include "OrderState.h"
#include <iostream>
class Done : public OrderState
{

public:
   
    bool cook(OrderContext* oc, Order* o){
        std::cout<< " order done" <<std::endl;
    }
};


