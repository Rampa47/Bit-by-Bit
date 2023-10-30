
#include "InProgress.h"
#include <iostream>

 void InProgress::cook(OrderContext* orderContext, Order* order){
        std::cout<< " order in progress" <<std::endl;
        orderContext->setOrderState(new InProgress);
        //what would you like to show about the order or do
       
    }
