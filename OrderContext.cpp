#include "OrderContext.h"

OrderContext::OrderContext(Order* order,OrderState* orderState){
    this.order=order;
    this.orderState=orderState;

}
bool OrderContext::cook(Order* o){
    orderState->cook(this,o);
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