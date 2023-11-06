#ifndef DONE_H
#define DONE_H
#include "OrderState.h"
#include <iostream>
/**
 * @class Done
 * @brief Is the Last state of the order.It indicates that the order is ready to be served to the Table that placed the order.
 */
class OrderContext;
class Done : public OrderState
{
    public:
        void cook(OrderContext* orderContext);
};
#endif
