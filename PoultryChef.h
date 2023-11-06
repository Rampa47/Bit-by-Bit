#ifndef POULTRYCHEF_H
#define POULTRYCHEF_H
#include "ChefHandler.h"

/**
 * @class PoultryChef
 * @brief Represents a Poultry Chef responsible for preparing Poultry.
 */
class PoultryChef: public ChefHandler
{
    public:
        /**
         * @brief Construct a new PoultryChef object.
         *
         * This constructor initializes a new instance of the PoultryChef class.
         */
        PoultryChef();

        /**
         * @brief Destroy the PoultryChef object.
         *
         * This virtual destructor is responsible for cleaning up any resources
         * associated with the PoultryChef object.
         */
        virtual ~PoultryChef();

        /**
         * @brief Handle a food order.
         *
         *  This function is responsible for preparing Poultry if it is found in the order.
         *
         * @param order An order object representing the customer order.
         */
        void handleOrder(Order* order);

};

#endif