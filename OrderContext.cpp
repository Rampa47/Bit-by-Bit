#include "OrderContext.h"

OrderContext::OrderContext(OrderState* orderState){
    
    this.orderState=orderState;

}
void OrderContext::cookChangeState(){
    orderState->cook(this);
}
void OrderContext::setOrderState(OrderState* orderState){
    if(this.orderState!=nullptr){
        delete this.orderState;
        this.orderState=orderState;
    }
}
OrderContext::OrderContext()
{
   
    orderState=nullptr;
}
OrderContext::~OrderContext() {
	delete  orderState;
}