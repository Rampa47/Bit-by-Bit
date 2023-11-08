#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include "Burger.h"

/**
 * @class ChickenBurger
 * @brief Represents a specific type of burger known as a chicken burger.
 */
class ChickenBurger : public Burger {
public:
    /**
     * @brief Adds a chicken patty to the chicken burger.
     *
     * This function implements the addition of a chicken patty to the chicken burger.
     */
    void addPatty() override;

    /**
     * @brief Virtual destructor for the ChickenBurger class.
     */
    virtual ~ChickenBurger();

    /**
     * @brief Get the price of the chicken burger.
     *
     * This function retrieves the price of the chicken burger.
     * @return the price of the chicken burger
     */
    virtual double getPrice();
};

#endif
