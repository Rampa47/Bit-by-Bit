#include "Order.h"
#include "FoodItem.h"
#include <iostream>

Order::Order(int waiter, ChefHandler* chefHandler)
    : waiter(waiter), chefHandler(chefHandler) {
    /**
     * @brief Constructor for the Order class.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param chefHandler A pointer to a chefHandler responsible for the order.
     */
    std::cout << "Waiter " << waiter << " taking Customer Order..." << std::endl;
}

void Order::handleTask() {
    /**
     * @brief Handles the order placed by a waiter.
     *
     * This function processes the order by preparing the specified dishes.
     */
    std::cout << "Order passed on to chefs..." << std::endl; 
//     in code the order is passed on to chefHandler but in the real world what we output to the terminal is that the order is passed on to the chef
    // Process each dish in the order
    chefHandler->handleOrder(&dishes,waiter);
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
