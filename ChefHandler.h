#ifndef CHEFHANDLER_H
#define CHEFHANDLER_H
#include <iostream>
class Order;
#include "Colleague.h"
using namespace std;
/**
 * @class ChefHandler
 *
 * @brief Base class for ChefHandlers responsible for handling food orders.
 */
class ChefHandler: public Colleague
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
         * @param order An order object representing the customer order.
         */
        virtual void handleOrder(Order* order)=0;

        /**
         * @brief Add a successor ChefHandler.
         *
         * This function is responsible for adding a successor ChefHandler to the current
         * ChefHandler instance, forming a chain of responsibility.
         *
         * @param c A pointer to the ChefHandler to be added as a successor.
         */
        virtual void addSuccessor(ChefHandler* c);
        
       //Changedstate bool= if true the state if not they dont change the state
       //the head chef has to trigger the change state
       /**void ChangeState(){
        * order->ChangeStateOfOrder();}

       }*/
};

#endif
