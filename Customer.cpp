#include <iostream>
#include "Customer.h"

#include "Order.h"


/// @brief Default constructor for a customer object.
/// This assigns a random name to the created customer object
Customer::Customer()
{
    this->name = names[rand() % names.size()];
    this->disposition = getRandomMood();
}

/// @brief Constructor for a customer object which takes in a name parameter.
/// @param name The customer name
Customer::Customer(std::string name)
{
    this->name = name;
    this->disposition = getRandomMood();
}

/// @return name of customer
std::string Customer::getName()
{
    return this->name;
}

void Customer::expressMood(std::shared_ptr<Waiter> waiter)
{
    std::cout << name << "-> ";
    this->disposition->expressMood(waiter);
}

/// @brief This function is responsible for creating the order of a customer - using a variety of food items.
/// @return returns a complete Order object
std::shared_ptr<Order> Customer::order()
{
    //---Mood changing logic depending on time spent in waiting area
    int timeElapsed = rand() % 11;

    if(timeElapsed > 5)
    {
        this->disposition = disposition->getNextMood(CustomerDisposition::moodDirection::negative);
    }
    //---Mood changing logic depending on time spent in waiting area

    //order construction logic - Dependent on Order
    std::cout << name <<" makes an order" <<  timeElapsed << std::endl;
    return nullptr;
}

void Customer::receiveOrder(std::shared_ptr<Order> order)
{
    //---Mood changing logic depending on time spent waiting for food
    int timeElapsed = (rand() % 31) + 20; //random value from 20 to 50

    if(timeElapsed > 35)
    {
        this->disposition = disposition->getNextMood(CustomerDisposition::negative);
    }
    else if (timeElapsed <= 25)
    {
        this->disposition = disposition->getNextMood(CustomerDisposition::moodDirection::positive);
    }
    //---Mood changing logic depending on time spent waiting for food

    std::cout << name << " receives their order " << timeElapsed <<  std::endl;
    this->receivedOrder = order;
}

void Customer::eatFood(){
    //---Mood changing logic depending on meal quality
    int foodQuality = (rand() % 10) + 1; //random rating between 1 and 10

    if(foodQuality > 8)
    {
        this->disposition = disposition->getNextMood(CustomerDisposition::moodDirection::positive);
    }
    else if(foodQuality < 5)
    {
        this->disposition = disposition->getNextMood(CustomerDisposition::moodDirection::negative);
    }
    //---Mood changing logic depending on meal quality

    std::cout << "Customer is eating food" << std::endl;

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

std::shared_ptr<CustomerDisposition> Customer::getRandomMood(){
    int randInt = rand() % 3;

    switch (randInt)
    {
        case 0:
            return std::make_shared<HappyMood>();
            break;
        case 1:
            return std::make_shared<ContentMood>();
            break;
        case 2:
            return std::make_shared<UnhappyMood>();
            break;
        default:
            return std::make_shared<ContentMood>();
            
    }
}


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
