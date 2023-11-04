#include "ChickenBurger.h"
#include <iostream>

void ChickenBurger::addPatty() {
    /**
     * @brief Adds a chicken patty to the burger.
     */
    std::cout << "Adding a chicken patty..." << std::endl;
}

ChickenBurger::~ChickenBurger() {
    /**
     * @brief Virtual destructor for the ChickenBurger class.
     */
}

double ChickenBurger::getPrice(){
    return 90.50;
}
