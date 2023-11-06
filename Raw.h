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
     * @brief The first concrete state of Order state.Changes the current state to the next state.
     *
     * @param orderContext the use of this pointer to change the state to the next state.Calling setOrderState().
     *
     */
        virtual void cook(OrderContext* orderContext);
};
#endif //RAW_H