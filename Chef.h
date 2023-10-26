#ifndef CHEF_H
#define CHEF_H

#include <vector>
#include "FoodItem.h"
#include <iostream>

/**
 * @class Chef
 * @brief Represents a chef specializing in poultry dishes.
 */
class Chef {
public:
    /**
     * @brief Handles an order placed by a waiter, preparing a list of poultry dishes.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param dishes A vector of food items representing the poultry dishes in the order.
     */
    void handleOrder(int waiter, const std::vector<FoodItem*>* dishes){
        std::cout << "Chef cooking dishes..." << std::endl;
        for(auto dish: *dishes){
            dish->cook();
        }
        std::cout << "Waiter " << waiter << ": order is ready..." << std::endl;
    };
};

#endif
