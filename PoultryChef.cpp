#include "PoultryChef.h"
#include "Order.h"

PoultryChef::PoultryChef()
{
}

PoultryChef::~PoultryChef()
{
    if (successor!=NULL) delete successor;
}

void PoultryChef::handleOrder(Order* order)
{
    std::cout << "Order passed on to the Poultry Chef..." << std::endl;
     std::cout << order << std::endl;
    order->changeStateOfOrder();
   
    for (FoodItem* foodItem : order->getFoodItems())
    {
        if (foodItem->getName().compare("Poultry")==0) 
        {
            foodItem->cook();
        }
    }

    successor->handleOrder(order);
}