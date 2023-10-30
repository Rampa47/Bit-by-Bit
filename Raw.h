#include "OrderState.h"
#include "OrderContext.h"
/**
 * @class Raw
 * @brief Is the initial state of the order
 */
class Raw: public OrderState
{

public:
   
     virtual void cook(OrderContext* orderContext, Order* order)
     
};