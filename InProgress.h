#ifndef INPROGRESS_H
#define INPROGRESS_H
#include "OrderState.h"
#include "Done.h"
#include <iostream>
/**
 * @class InProgress
 * @brief Is the second state after Raw .This state will be triggered once the chef starts working on the order.
 */
class OrderContext;
class InProgress : public OrderState
{
public:
   /**
     * @brief The second concrete state of Order state.Changes the current state to the next state.
     *
     * @param orderContext the use of this pointer to change the state to the next state.Calling setOrderState().
     *
     */
      void cook(OrderContext* orderContext);

};
#endif