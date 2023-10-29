#include "PoultryChef.h"

PoultryChef::PoultryChef()
{
}

PoultryChef::~PoultryChef()
{
}

void PoultryChef::handleOrder(vector<FoodItem*>* order, int waiter)
{
    //not sure if i change the state here but if i do , ill need the DishState pointer to the current order
    /*
        //need passed in Dishstate* state;
        state.getNextState(); // which should be inprogress/cooking/preparing order
    */
    for (FoodItem* foodItem : *order)
    {
        if (foodItem->getName().compare("Poultry")==0) 
        {
            foodItem->cook();
        }
    }

    successor->handleOrder(order,waiter);
}