#ifndef BURGER_H
#define BURGER_H

#include "FoodItem.h"

/**
 * @class Burger
 * @brief Represents a burger as a type of food item.
 */
class Burger : public FoodItem 
{
    public:
        /**
         * @brief Cooks the burger.
         *
         * This function represents the cooking process for a burger.
         */
        void cook() override;

        /**
         * @brief Adds a patty to the burger.
         *
         * This is a pure virtual method that needs to be implemented by derived classes.
         */
        virtual void addPatty() = 0;

        /**
         * @brief Adds buns to the burger.
         *
         * Derived classes may provide an implementation for adding buns.
         */
        void addBuns();

        /**
         * @brief Adds salads to the burger.
         *
         * Derived classes may provide an implementation for adding salads.
         */
        void addSalads();

        /**
         * @brief Adds cheese to the burger.
         *
         * Derived classes may provide an implementation for adding cheese.
         */
        void addCheese();

        /**
         * @brief Get the name of the class.
         *
         * This function retrieves the name of the class(food item) and returns it as a string.
         *
         * @return A string containing the name of the class.
         */
        string getName();

        /**
         * @brief Virtual destructor for the Burger class.
         */
        virtual ~Burger();

        /**
         * @brief Get the price of the food item.
         * @return the price of the food item
         */
        virtual double getPrice()=0;
};

#endif