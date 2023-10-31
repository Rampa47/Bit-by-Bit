#ifndef ORDERCONTEXT_H
#define ORDERCONTEXT_H
#include "OrderState.h"
#include "Order.h"
#include <iostream>
/**
 * @class OrderContext
 * @brief Responsible for setting the new state if changed and allow derived classes to initiate a state change if needed.
 */
class OrderContext
{
private:
    Order* order;//holds the current order being dealt with
    OrderState* orderState;//holds the current state of the order
public:
   /**
     * @brief parameterized constructor that will populate variables order and orderState
     */
    OrderContext(Order* order,OrderState* orderState);
    /**
     * @brief Responsible for using the Order pointer to call the cook method corresponding to the right ConcreteClass which will be determined by the order pointer passed.
     *
     * @param order a pointer that will be passed to the cook method specific to the current saved orderState variable's cook method. 
     */
    void cookChangeState(Order* order);
     /**
     * @brief Responsible for populating orderState variable with new passed in orderState passed in from the parameter.
     *
     * @param orderState a pointer that will populate orderState variable. 
     */
    void setOrderState(OrderState* orderState);

    virtual ~OrderContext();
protected:
    OrderContext();
};
#endif

