#ifndef BEEFBURGER_H
#define BEEFBURGER_H

#include "Burger.h"

/**
 * @class BeefBurger
 * @brief Represents a specific type of burger known as a beef burger.
 */
class BeefBurger : public Burger {
public:

    /**
     * @brief Adds a beef patty to the beef burger.
     *
     * This function represents the action of adding a beef patty to the beef burger.
     */
    void addPatty() override;

    /**
     * @brief Virtual destructor for the BeefBurger class.
     */
    virtual ~BeefBurger();

    /**
     * @brief Get the price of the beef burger.
     *
     * This function retrieves the price of the beef burger.
     * @return the price of the beef burger
     */
    virtual double getPrice();
};

#endif
