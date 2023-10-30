#include "BurgerChef.h"

BurgerChef::BurgerChef()
{
}

BurgerChef::~BurgerChef()
{
}

void BurgerChef::handleOrder(vector<FoodItem*>* order, int waiter)
{
    for (FoodItem* foodItem : *order)
    {
        if (foodItem->getName().compare("Burger")==0)
        {
            foodItem->cook();
        }
    }
    successor->handleOrder(order,waiter);
}