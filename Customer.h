#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

#include "ChickenBurger.h"
#include "BeefBurger.h"
#include "PlainChips.h"
#include "TomatoChipSauce.h"
#include "JalapenoChipSauce.h"
#include "GrilledPoultry.h"
#include "FriedPoultry.h"
#include "Poultry.h"
#include "FoodItem.h"
#include "Order.h"

class Customer
{
    public:
        Customer();
        Customer(std::string name);
        std::string getName();
        void selectFoodItems(Order * order);

    private:
        std::string name;
};

#endif