#include "Order.h"
#include <iostream>

Order::Order(int waiter)
        : waiter(waiter){
    /**
     * @brief Constructor for the Order class.
     *
     * @param waiter The ID of the waiter who placed the order.
     * @param chefHandler A pointer to a chefHandler responsible for the order.
     */
    this->orderContext=new OrderContext(new Raw());
    std::cout << "Waiter " << waiter << " taking Customer Order..." << std::endl;
}
void Order::changeStateOfOrder(){

    orderContext->cookChangeState();
}


void Order::addFoodItem(FoodItem* foodItem) {
    /**
     * @brief Adds a food item to the order.
     *
     * @param foodItem A pointer to the food item to be added to the order.
     */
    foodItems.push_back(foodItem);
}

Order::~Order() {
    /**
     * @brief Destructor to clean up and delete all food items in the foodItems vector.
     */
    for (FoodItem* foodItem : foodItems) {
        delete foodItem;
    }
    delete orderContext;
}


const std::vector<FoodItem*>& Order::getFoodItems(){
    /**
     * @brief returns the foodItems parameter
     */
    return foodItems;
}


const int Order::getWaiter(){
    /**
     * @brief returns the waiterNumber parameter
     */
    return waiter;
}