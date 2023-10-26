#include "OrderContext.h"

OrderContext::OrderContext(Order* o,OrderState* os){
    order=o;
    orderstate=os;

}
bool OrderContext::cook(Order* o){
    orderstate->cook(this,o);
}
void OrderContext::setOrderState(OrderState* o){
    if(orderstate!=nullptr){
        delete orderstate;
        orderstate=o;
    }
}
OrderContext::OrderContext()
{
    order=nullptr;
    orderstate=nullptr;
}
OrderContext::~OrderContext() {
	delete  orderstate;
}