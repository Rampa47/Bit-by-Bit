#ifndef CHIPS_H
#define CHIPS_H

#include "FoodItem.h"

/**
 * @class Chips
 * @brief Represents a type of food item: chips.
 */
class Chips : public FoodItem {
public:
    /**
     * @brief Virtual destructor for the Chips class.
     */
    virtual ~Chips() = default;

    /**
     * @brief Get the name of the class.
     *
     * This function retrieves the name of the class(food item) and returns it as a string.
     *
     * @return A string containing the name of the class.
     */
    string getName();

    /**
     * @brief Cooks the chips.
     *
     * This is a pure virtual function that needs to be implemented by derived classes.
     */
    virtual void cook() = 0;
};

#endif
