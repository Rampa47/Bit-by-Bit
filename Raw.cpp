#include "Raw.h"
#include <iostream>


   
     void Raw::cook(OrderContext* orderContext){
        std::cout<<"Order state changing: Raw -> InProgress...\n";
        orderContext->setOrderState(new InProgress());
        //what would you like to show about the order or do
       
    }