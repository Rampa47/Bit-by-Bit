#include "Customer.h"
#include<cstdlib>

Customer::Customer()
{
    name = "";
}

Customer::Customer(std::string name)
{
    this->name = name;
}

std::string Customer::getName()
{
    return name;
}

void Customer::selectFoodItems(Order * order){

    srand((unsigned) time(NULL));
	int numOfItems = rand()%5;

    for(int i=0; i<numOfItems;i++ ){
        int item= rand()%5;
        switch (item)
        {
        case 0:
            order->addFoodItem(new ChickenBurger);
            break;
        case 1:
            order->addFoodItem(new Poultry(new GrilledPoultry));
            break;
        case 2:
            order->addFoodItem(new BeefBurger);
            break;
        case 3:
            order->addFoodItem(new TomatoChipSauce( new JalapenoChipSauce(new PlainChips)));
            break;
        case 4:
            order->addFoodItem(new Poultry(new FriedPoultry));
            break;
        case 5:
            order->addFoodItem(new JalapenoChipSauce(new PlainChips));
        case 6:
            order->addFoodItem(new TomatoChipSauce(new PlainChips));
            break;
        case 7:
            order->addFoodItem(new PlainChips);
            break;
        
        default:
            break;
        }
        
	
    
    }

    
}