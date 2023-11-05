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
	int numOfItems = rand()%2+1;
    FoodItem* foodItem;

    for(int i=0; i<numOfItems;i++ ){
        int item= rand()%7;
        switch (item)
        {
        case 0:
            foodItem= new ChickenBurger();
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 1:
            foodItem= new Poultry(new GrilledPoultry);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 2:
            foodItem= new BeefBurger();
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 3:
            foodItem= new TomatoChipSauce( new JalapenoChipSauce(new PlainChips));
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 4:
            foodItem= new Poultry(new FriedPoultry);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 5:
            foodItem= new JalapenoChipSauce(new PlainChips);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
        case 6:
            foodItem= new TomatoChipSauce(new PlainChips);
            order->addFoodItem(foodItem);
            billAmount+=foodItem->getPrice();
            break;
        case 7:
            foodItem= new PlainChips;
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

/**
 * @brief Instantiates and returns a new BillPayer object with the current customer instance's name and bill amount
 * @return A pointer to a newly created BillPayer object
*/
BillPayer* Customer::getBill(){
    return new BillPayer(billAmount,name);
}
