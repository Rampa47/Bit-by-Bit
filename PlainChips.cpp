#include "PlainChips.h"
#include <iostream>

PlainChips::~PlainChips() {
}

void PlainChips::cook() {
    std::cout << "  Preparing the Chips..." << std::endl;
    std::cout << "      Frying plain chips..." << std::endl;
}

double PlainChips::getPrice(){
    return 49.99;
}
