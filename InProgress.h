#ifndef INPROGRESS_H
#define INPROGRESS_H
#include "OrderState.h"
#include "Done.h"
#include "OrderContext.h"
#include <iostream>
/**
 * @class InProgress
 * @brief Is the second state after Raw .This state will be triggered once the chef starts working on the order.
 */
class OrderContext;
class InProgress : public OrderState
{

public:
   
      void cook(OrderContext* orderContext);
};
#endif