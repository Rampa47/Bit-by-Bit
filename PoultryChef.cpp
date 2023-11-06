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
    free= false;
    std::cout << "Waiter "<<order->getWaiter()<<"'s order passed on to the Poultry Chef..." << std::endl;
    order->changeStateOfOrder();
   
    for (FoodItem* foodItem : order->getFoodItems())
    {
        if (foodItem->getName().compare("Poultry")==0) 
        {
            foodItem->cook();
        }
    }
    ThreadSleep::threadSleep();
    free= true;
    ThreadSleep::execute();
    successor->handleOrder(order);
}
