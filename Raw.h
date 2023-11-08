#ifndef RAW_H
#define RAW_H
#include "OrderState.h"
#include "InProgress.h"
/**
 * @class Raw
 * @brief Is the initial state of the order
 */
class OrderContext;
class Raw : public OrderState
{
    public:
    /**
       * @brief uses the orderContext to change the current state to the next state.
       * */
        virtual void cook(OrderContext* orderContext);
   

};
#endif //RAW_H