
#include "InProgress.h"
#include <iostream>

 void InProgress::cook(OrderContext* orderContext){
        std::cout<<"Order state changing: Inprogress -> Done...\n";
        orderContext->setOrderState(new Done());
        //what would you like to show about the order or do
       
    }
