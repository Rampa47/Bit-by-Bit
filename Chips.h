#ifndef CHIPS_H
#define CHIPS_H

#include "FoodItem.h"

/**
 * @class Chips
 * @brief Represents a specific type of food item known as chips.
 */
class Chips : public FoodItem {
public:
    /**
     * @brief Virtual destructor for the Chips class.
     */
    virtual ~Chips() = default;

    /**
     * @brief Get the name of the chips.
     *
     * Retrieves and returns the name of the class (food item) as a string.
     *
     * @return A string containing the name of the class (chips).
     */
    string getName();

    /**
     * @brief Cooks the chips.
     *
     * This is a pure virtual function that must be implemented by derived classes.
     */
    virtual void cook() = 0;

    /**
     * @brief Get the price of the chips.
     *
     * This function retrieves the price of the chips as a double.
     *
     * @return the price of the chips
     */
    virtual double getPrice() = 0;
};

#endif
