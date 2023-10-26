#ifndef ORDER_H
#define ORDER_H
#include "Order.h"
#include <iostream>
class OrderState
{

public:
    virtual bool(OrderContext* oc,Order* o)=0;
 
   virtual ~OrderState(){};
};
#endif