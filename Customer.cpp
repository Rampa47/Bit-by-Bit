#include <iostream>
#include "Customer.h"

#include "Order.h"


/// @brief Default constructor for a customer object.
/// This assigns a random name to the created customer object
Customer::Customer()
{
    this->name = names[rand() % names.size()];
   
}

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

// void Customer::expressMood(Waiter* waiter)
// {
//     std::cout << name << "-> ";
//     this->disposition->expressMood(waiter);
// }

/// @brief This function is responsible for creating the order of a customer - using a variety of food items.
/// @return returns a complete Order object
Order* Customer::order()
{
}

void Customer::receiveOrder(Order* order)
{
    

    
    this->receivedOrder = order;
}

void Customer::eatFood(){
   

}

int Customer::getTableNumber() const
{
    return this->tableNumber;
}

void Customer::setTableNumber(int tableNumber)
{
    if (tableNumber < 0) {
        throw "Invalid table number supplied. Table number must be >= 0";
    }
    this->tableNumber = tableNumber;
} 

// CustomerDisposition* Customer::getRandomMood(){
//     int randInt = rand() % 3;

//     switch (randInt)
//     {
//         case 0:
//             return std::make_shared<HappyMood>();
//             break;
//         case 1:
//             return std::make_shared<ContentMood>();
//             break;
//         case 2:
//             return std::make_shared<UnhappyMood>();
//             break;
//         default:
//             return std::make_shared<ContentMood>();
            
//     }
// }


void Customer::selectFoodItems(Order * order){

    srand((unsigned) time(NULL));
	int numOfItems = rand()%5+1;

    for(int i=0; i<numOfItems;i++ ){
        int item= rand()%7;
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

std::array<std::string,40> Customer::names  = {
    "Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry",
    "Ivy", "Jack", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Penelope",
    "Quincy", "Rachel", "Samuel", "Taylor", "Uma", "Victor", "Wendy", "Xander",
    "Yasmine", "Zane", "Sophia", "William", "Ella", "James", "Ava", "Elijah",
    "Scarlett", "Benjamin", "Lily", "Lucas", "Chloe", "Aiden", "Zoe"
};
