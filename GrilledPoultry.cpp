#include "GrilledPoultry.h"
#include <iostream>

void GrilledPoultry::cook() {
    std::cout << "      Grilling the poultry..." << std::endl;
}

GrilledPoultry::~GrilledPoultry() {
}

double GrilledPoultry::getPrice(){
    return 162.90;
}

