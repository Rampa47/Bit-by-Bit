#include "BurgerChef.h"
#include "Order.h"

BurgerChef::BurgerChef()
{
}

BurgerChef::~BurgerChef()
{
    if (successor!=NULL) delete successor;
}

void BurgerChef::handleOrder(Order* order)
{
    std::cout << "Waiter "<<order->getWaiter()<<"'s order passed on to the Burger Chef..." << std::endl;
    for (FoodItem* foodItem : order->getFoodItems())
    {
        if (foodItem->getName().compare("Burger")==0)
        {
            foodItem->cook();
        }
    }
    ThreadSleep::threadSleep();
    ThreadSleep::execute();
    successor->handleOrder(order);
}