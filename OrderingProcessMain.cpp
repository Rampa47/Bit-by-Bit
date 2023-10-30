#include <iostream>
#include "ChefHandler.h"
#include "BeefBurger.h"
#include "ChickenBurger.h"
#include "PlainChips.h"
#include "TomatoChipSauce.h"
#include "JalapenoChipSauce.h"
#include "GrilledPoultry.h"
#include "FriedPoultry.h"
#include "Poultry.h"
#include "Order.h"
#include "OrderState.h"
#include "OrderContext.h"
#include "InProgress.h"
#include "Done.h"
#include "Raw.h"


using namespace std;

int main(){
    ChefHandler* chef= new ChefHandler;
    Order * order= new Order(0, chef);
    

    order->addFoodItem(new BeefBurger);
    order->addFoodItem(new ChickenBurger);
    order->addFoodItem(new TomatoChipSauce( new JalapenoChipSauce(new PlainChips)));
    order->addFoodItem(new Poultry(new GrilledPoultry));
    order->addFoodItem(new Poultry(new FriedPoultry));
    OrderContext* OrderContext=new OrderContext(order,new Raw());
    OrderContext->cook(order);//we are changing the state of the whole order to in progress before we handle
    order->handleTask();
    OrderContext->cook(order);//we are changing the state to done once the after the order has been handled
    
    delete OrderContext;
    delete order;
    delete chef;
    return 0;
}