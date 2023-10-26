#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include "Burger.h"

/**
 * @class ChickenBurger
 * @brief Represents a Chicken burger, a specific type of burger.
 */
class ChickenBurger : public Burger {
public:
    /**
     * @brief Adds a chicken patty to the burger.
     *
     * This implementation adds a chicken patty to the burger.
     */
    void addPatty() override;

    /**
     * @brief Virtual destructor for the ChickenBurger class.
     */
    virtual ~ChickenBurger();
};

#endif
