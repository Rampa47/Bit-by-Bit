#ifndef FOODITEM_H
#define FOODITEM_H

/**
 * @class FoodItem
 * @brief Represents a food item that can be cooked.
 */
class FoodItem {
public:
    /**
     * @brief Cooks the food item.
     *
     * This is a pure virtual function that needs to be implemented by derived classes.
     */
    virtual void cook() = 0;

    /**
     * @brief Virtual destructor for the FoodItem class.
     */
    virtual ~FoodItem() = default;
};

#endif
