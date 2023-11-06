#ifndef FRYCHEF_H
#define FRYCHEF_H
#include "ChefHandler.h"

/**
 * @class FryChef
 * @brief Represents a Fry Chef responsible for frying fooditems.
 */
class FryChef:public ChefHandler
{
    public:
        /**
         * @brief Construct a new FryChef object.
         *
         * This constructor initializes a new instance of the FryChef class.
         */
        FryChef();

        /**
        * @brief Destroy the FryChef object.
        *
        * This virtual destructor is responsible for cleaning up any resources
        * associated with the FryChef object.
        */
        virtual ~FryChef();

        /**
         * @brief Handle a food order.
         *
         *  This function is responsible for preparing any fooditems in the order that need to be fried.
         *
         * @param order An order object representing the customer order.
         */
        void handleOrder(Order* order);
};
#endif