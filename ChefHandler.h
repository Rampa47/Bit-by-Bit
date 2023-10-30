#ifndef CHEFHANDLER_H
#define CHEFHANDLER_H
#include "FoodItem.h"
#include <vector>
#include <typeinfo>
#include <iostream>

using namespace std;
/**
 * @class ChefHandler
 *
 * @brief Base class for ChefHandlers responsible for handling food orders.
 */
class ChefHandler
{
    protected:
        ChefHandler* successor ;
    public:
        /**
         * @brief Construct a new ChefHandler object.
         *
         * This constructor initializes a new instance of the ChefHandler class.
         */
        ChefHandler();

        /**
         * @brief Destroy the ChefHandler object.
         *
         * This virtual destructor is responsible for cleaning up any resources
         * associated with the ChefHandler object.
         */
        virtual ~ChefHandler();

        /**
         * @brief Handle a food order.
         *
         * This pure virtual function is responsible for preparing a food order.
         * 
         * Subclasses must implement this function to define how they handle the order.
         *
         * @param order A vector of FoodItem pointers representing the food order.
         * @param waiter An integer representing the waiter ID of the waiter taking the order.
         */
        virtual void handleOrder(vector<FoodItem*>* order, int waiter)=0;

        /**
         * @brief Add a successor ChefHandler.
         *
         * This function is responsible for adding a successor ChefHandler to the current
         * ChefHandler instance, forming a chain of responsibility.
         *
         * @param c A pointer to the ChefHandler to be added as a successor.
         */
        virtual void addSuccessor(ChefHandler* c);
       
};

#endif
