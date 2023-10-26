#include <iostream>
#include "Chef.h"
#include "BeefBurger.h"
#include "ChickenBurger.h"
#include "PlainChips.h"
#include "TomatoChipSauce.h"
#include "JalapenoChipSauce.h"
#include "GrilledPoultry.h"
#include "FriedPoultry.h"
#include "Poultry.h"
#include "Order.h"


using namespace std;

int main(){
    Chef* chef= new Chef;
    Order * order= new Order(0, chef);

    order->addFoodItem(new BeefBurger);
    order->addFoodItem(new ChickenBurger);
    order->addFoodItem(new TomatoChipSauce( new JalapenoChipSauce(new PlainChips)));
    order->addFoodItem(new Poultry(new GrilledPoultry));
    order->addFoodItem(new Poultry(new FriedPoultry));

    order->handleTask();

    delete order;
    delete chef;
    return 0;
}