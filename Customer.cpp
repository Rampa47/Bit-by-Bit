#include <iostream>
#include "Customer.h"

#include "Order.h"



/// @brief Constructor for a customer object which takes in a name parameter.
/// @param name The customer name
Customer::Customer(std::string name)
{
    this->name = name;
}

/// @return name of customer
std::string Customer::getName()
{
    return this->name;
}



void Customer::selectFoodItems(Order * order){

    billAmount=0;

    srand((unsigned) time(NULL));
	int numOfItems = rand()%5+1;

    for(int i=0; i<numOfItems;i++ ){
        int item= rand()%7;
        switch (item)
        {
        case 0:
            FoodItem* foodItem= new ChickenBurger();
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 1:
            FoodItem* foodItem= new Poultry(new GrilledPoultry);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 2:
            FoodItem* foodItem= new BeefBurger();
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 3:
            FoodItem* foodItem= new TomatoChipSauce( new JalapenoChipSauce(new PlainChips));
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 4:
            FoodItem* foodItem= new Poultry(new FriedPoultry);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 5:
            FoodItem* foodItem= new JalapenoChipSauce(new PlainChips);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
        case 6:
            FoodItem* foodItem= new TomatoChipSauce(new PlainChips);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 7:
            FoodItem* foodItem= new PlainChips;
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        
        default:
            break;
        }
        
	
    
    }

    
}

double Customer::getBillAmount(){
    return billAmount;
}
