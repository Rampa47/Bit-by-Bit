#ifndef ORDER_H
#define ORDER_H

#include "ChefTask.h"
#include "FoodItem.h"
#include "ChefHandler.h"
#include <vector>

/**
 * @class Order
 * @brief Represents an order placed by a waiter.
 */
class Order : public ChefTask {
private:
    int waiter; // The ID of the waiter that is in charge of the Order
    ChefHandler* chefHandler; // A pointer to a ChefHandler
    std::vector<FoodItem*> dishes; // A vector of food items in the order
public:
    /**
     * @brief Constructor for the Order class.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param chefHandler A pointer to a ChefHandler responsible for the order.
     */
    Order(int waiter, ChefHandler* chefHandler);

    /**
     * @brief Handles the order placed by a waiter.
     *
     * This function processes the order by preparing the specified dishes.
     */
    void handleTask() override;

    /**
     * @brief Adds a food item to the order.
     *
     * @param item A pointer to the food item to be added to the order.
     */
    void addFoodItem(FoodItem* item);

    /**
     * @brief Destructor for the Order class.
     */
    virtual ~Order();
};

#endif