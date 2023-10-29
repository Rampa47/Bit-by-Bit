#include "FryChef.h"

FryChef::FryChef()
{
}

FryChef::~FryChef()
{
}

void FryChef::handleOrder(vector<FoodItem*>* order, int waiter)
{
    for (FoodItem* foodItem : *order)
    {
        if (foodItem->getName().compare("Chips")==0)
        {
            foodItem->cook();
        }
    }
    successor->handleOrder(order,waiter);
}