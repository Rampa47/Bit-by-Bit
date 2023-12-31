#ifndef ORDERSTATE_H
#define ORDERSTATE_H
#include "OrderContext.h"
#include <iostream>
/**
 * @class OrderState
 * @brief This will be the Abstract Parent class where the Derived classes will implement the cook method based on their current state.
 */
class OrderContext;
class OrderState
{

public:


        virtual ~OrderState(){};
        OrderState(){};
    /**
     * @brief This will be the Abstract Parent class's cook method which is pure virtual therefore  the Derived classes will implement the cook method based on their current state.
     */
        virtual void cook(OrderContext* orderContext) = 0;

     
};
#endif //ORDERSTATE_H