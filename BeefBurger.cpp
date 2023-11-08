#include "BeefBurger.h"
#include <iostream>

void BeefBurger::addPatty() {
    std::cout << "      Adding a beef patty..." << std::endl;
}

BeefBurger::~BeefBurger() {
}

double BeefBurger::getPrice(){
    return 109.99;
}
