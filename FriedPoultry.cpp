#include "FriedPoultry.h"
#include <iostream>

void FriedPoultry::cook() {
    std::cout << "      Frying the poultry..." << std::endl;
}

FriedPoultry::~FriedPoultry() {
}

double FriedPoultry::getPrice(){
    return 130.00;
}
