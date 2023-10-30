#ifndef BURGERCHEF_H
#define BURGERCHEF_H
#include "ChefHandler.h"

/**
 * @class BurgerChef
 * @brief Represents a Burger Chef responsible for preparing Burgers.
 */
class BurgerChef:public ChefHandler
{

    public:
        /**
         * @brief Construct a new BurgerChef object.
         *
         * This constructor initializes a new instance of the BurgerChef class.
         */
        BurgerChef();

        /**
         * @brief Destroy the BurgerChef object.
         *
         * This virtual destructor is responsible for cleaning up any resources
         * associated with the BurgerChef object.
         */
        virtual ~BurgerChef();

        /**
         * @brief Handle a food order.
         *
         *  This function is responsible for preparing  a Burger if it is found in the order. 
         * 
         * @param order A vector of FoodItem pointers representing the food order.
         * @param waiter An integer representing the waiter ID of the waiter taking the order.
         */
        void handleOrder(vector<FoodItem*>* order, int waiter);
    
};
#endif
