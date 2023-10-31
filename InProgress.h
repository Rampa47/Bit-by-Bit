#include "OrderState.h"
#include "OrderContext.h"
#include <iostream>
/**
 * @class InProgress
 * @brief Is the second state after Raw .This state will be triggered once the chef starts working on the order.
 */
class InProgress : public OrderState
{

public:
   
     virtual void cook(OrderContext* orderContext, Order* order);
};