#include "FryChef.h"
#include "Order.h"

FryChef::FryChef()
{
}

FryChef::~FryChef()
{
    if (successor!=NULL) delete successor;
}

void FryChef::handleOrder(Order* order)
{
    std::cout << "Order passed on to the Fry Chef..." << std::endl;
    for (FoodItem* foodItem : order->getFoodItems())
    {
        if (foodItem->getName().compare("Chips")==0)
        {
            foodItem->cook();
        }
    }
    successor->handleOrder(order);
}