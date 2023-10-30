#include "OrderState.h"
#include "OrderContext.h"
#include "Raw.h"
#include <iostream>


   
     void Raw::cook(OrderContext* orderContext, Order* order){
        std::cout<<"Cooking the raw order\n";
        orderContext->setOrderState(new InProgress());
        //what would you like to show about the order or do
       
    }


