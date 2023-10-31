#include "OrderContext.h"

OrderContext::OrderContext(Order* order,OrderState* orderState){
    this.order=order;
    this.orderState=orderState;

}
void OrderContext::cookChangeState(Order* order){
    orderState->cook(this,order);
}
void OrderContext::setOrderState(OrderState* orderState){
    if(this.orderState!=nullptr){
        delete this.orderState;
        this.orderState=orderState;
    }
}
OrderContext::OrderContext()
{
    order=nullptr;
    orderState=nullptr;
}
OrderContext::~OrderContext() {
	delete  orderState;
}