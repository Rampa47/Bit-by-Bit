#ifndef RAW_H
#define RAW_H
#include "OrderState.h"
#include "OrderContext.h"
/**
 * @class Raw
 * @brief Is the initial state of the order
 */
class Raw: public OrderState
{

public:
   
     virtual void cook(OrderContext* orderContext);
     
};
#endif //RAW_H