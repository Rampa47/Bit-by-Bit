#ifndef ORDER_H
#define ORDER_H

#include "ChefTask.h"
#include "FoodItem.h"
#include "Chef.h"
#include <vector>

/**
 * @class Order
 * @brief Represents an order placed by a waiter.
 */
class Order : public ChefTask {
private:
    std::vector<FoodItem*> dishes; // A vector of food items in the order
    Chef* chef; // A pointer to a Chef
    int waiter; // The ID of the waiter that is in charge of the Order

public:
    /**
     * @brief Constructor for the Order class.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param chef A pointer to a Chef responsible for the order.
     */
    Order(int waiter, Chef* chef);

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
};

#endif