#ifndef BEEFBURGER_H
#define BEEFBURGER_H

#include "Burger.h"

/**
 * @class BeefBurger
 * @brief Represents a beef burger, a specific type of burger.
 */
class BeefBurger : public Burger 
{
    public:

        /**
         * @brief Adds a beef patty to the burger.
         *
         * This implementation adds a beef patty to the burger.
         */
        void addPatty() override;

        /**
         * @brief Virtual destructor for the BeefBurger class.
         */
        virtual ~BeefBurger();
        /**
         * @brief Get the price of the food item.
         * @return the price of the food item
         */
        virtual double getPrice();
};

#endif