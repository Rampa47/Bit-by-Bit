#ifndef DONE_H
#define DONE_H
#include "OrderState.h"
#include "OrderContext.h"
#include <iostream>
/**
 * @class Done
 * @brief Is the Last state of the order.It indicates that the order is ready to be served to the Table that placed the order.
 */
class Done : public OrderState
{

public:
   
    virtual void cook(OrderContext* orderContext);
};
#endif
