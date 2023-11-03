#include "BeefBurger.h"
#include <iostream>

void BeefBurger::addPatty() {
    /**
     * @brief Adds a beef patty to the burger.
     */
    std::cout << "Adding a beef patty..." << std::endl;
}

BeefBurger::~BeefBurger() {
    /**
     * @brief Virtual destructor for the BeefBurger class.
     */
}

double BeefBurger::getPrice(){
    return 109.99;
}
