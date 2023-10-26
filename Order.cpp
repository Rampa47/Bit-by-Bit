#include "Order.h"
#include "FoodItem.h"
#include "Chef.h"
#include <iostream>

Order::Order(int waiter, Chef* chef)
    : waiter(waiter), chef(chef) {
    /**
     * @brief Constructor for the Order class.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param chef A pointer to a Chef responsible for the order.
     */
    std::cout << "Waiter " << waiter << " taking Customer Order." << std::endl;
}

void Order::handleTask() {
    /**
     * @brief Handles the order placed by a waiter.
     *
     * This function processes the order by preparing the specified dishes.
     */
    std::cout << "Order passed on to Chef" << std::endl;

    // Process each dish in the order
    chef->handleOrder(waiter, &dishes);
}

void Order::addFoodItem(FoodItem* dish) {
    /**
     * @brief Adds a food item to the order.
     *
     * @param dish A pointer to the food item to be added to the order.
     */
    dishes.push_back(dish);
}

Order::~Order() {
    /**
     * @brief Destructor to clean up and delete all food items in the dishes vector.
     */
    for (FoodItem* dish : dishes) {
        delete dish;
    }
    dishes.clear();
}
