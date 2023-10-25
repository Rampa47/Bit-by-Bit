#include "OrderState.h"
class Raw: public OrderState
{

public:
   
     bool cook(OrderContext* oc, Order* o){
        cout<<"Cooking the raw order\n";
       oc->setOrderState(new Raw);
       return true;
    }
};


