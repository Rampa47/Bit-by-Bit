#include "OrderState.h"
#include "Order.h"
#include <iostream>
class OrderContext
{
private:
    Order* order;
    OrderState* orderstate;
public:
    OrderContext(Order* o,OrderState* os);
    bool cook(Order* o);
    void setOrderState(OrderState* os);

    virtual ~OrderContext();
protected:
    OrderContext();
};


