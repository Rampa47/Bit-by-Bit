#ifndef BURGERCHEF_H
#define BURGERCHEF_H
#include "ChefHandler.h"

/**
 * @class BurgerChef
 * @brief Represents a Burger Chef responsible for preparing Burgers.
 */
class BurgerChef:public ChefHandler
{

public:
    /**
     * @brief Construct a new BurgerChef object.
     *
     * This constructor initializes a new instance of the BurgerChef class.
     */
    BurgerChef();

    /**
     * @brief Destroy the BurgerChef object.
     *
     * This virtual destructor is responsible for cleaning up any resources
     * associated with the BurgerChef object.
     */
    virtual ~BurgerChef();

    /**
     * @brief Handle a food order.
     *
     *  This function is responsible for preparing  a Burger if it is found in the order.
     *
     * @param order An order object representing the customer order.
     */
    void handleOrder(Order* order);

};
#endif