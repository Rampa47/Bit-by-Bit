#include "OrderContext.h"
#include "OrderState.h"

OrderContext::OrderContext(OrderState* orderState)
{

    this->orderState=orderState;

}

void OrderContext::cookChangeState()
{
    
   
   
    this->orderState->cook(this);
 
}

void OrderContext::setOrderState(OrderState* orderState)
{
    if(this->orderState!=nullptr){
         this->orderState=nullptr;
        this->orderState=orderState;
    }
}

OrderContext::OrderContext()
{

    orderState=nullptr;
}

OrderContext::~OrderContext() {
    delete  orderState;
}