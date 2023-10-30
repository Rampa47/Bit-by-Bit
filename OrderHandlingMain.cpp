#include <iostream>
#include <memory>
#include "PoultryChef.h"
#include "FryChef.h"
#include "BurgerChef.h"
#include "HeadChef.h"
#include "Order.h"
#include "ChickenBurger.h"
#include "BeefBurger.h"
#include "PlainChips.h"
#include "TomatoChipSauce.h"
#include "JalapenoChipSauce.h"
#include "GrilledPoultry.h"
#include "FriedPoultry.h"
#include "Poultry.h"

using namespace std;

int main() 
{
	//Assemble the chain:
	ChefHandler* orderhandler = new PoultryChef();
	orderhandler->addSuccessor(new FryChef());
	orderhandler->addSuccessor(new BurgerChef());
	orderhandler->addSuccessor(new HeadChef());

    Order * order= new Order(4, orderhandler);
	order->addFoodItem(new ChickenBurger);
	order->addFoodItem(new Poultry(new GrilledPoultry));
    order->addFoodItem(new BeefBurger);
    order->addFoodItem(new TomatoChipSauce( new JalapenoChipSauce(new PlainChips)));
    order->addFoodItem(new Poultry(new FriedPoultry));

	order->handleTask();
  	cout << endl;
    delete order;
    delete orderhandler;

    return 0;
}