#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
using namespace std;

/**
 * @class FoodItem
 * @brief Represents a food item that can be cooked.
 */
class FoodItem {
public:
    /**
     * @brief Cooks the food item.
     *
     * This is a pure virtual function that must be implemented by derived classes to cook the specific food item.
     */
    virtual void cook() = 0;

    /**
     * @brief Get the name of the class.
     *
     * This function retrieves the name of the class and returns it as a string.
     *
     * @return A string containing the name of the class (FoodItem).
     */
    virtual string getName() = 0;

    /**
     * @brief Virtual destructor for the FoodItem class.
     */
    virtual ~FoodItem() = default;

    /**
     * @brief Get the price of the food item.
     *
     * This function retrieves the price of the specific food item.
     * @return the price of the specific food item
     */
    virtual double getPrice() = 0;
};

#endif
