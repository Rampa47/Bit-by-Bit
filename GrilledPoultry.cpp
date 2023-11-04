#include "GrilledPoultry.h"
#include <iostream>

void GrilledPoultry::cook() {
    /**
     * @brief Cooks the grilled poultry.
     */
    std::cout << "Grilling the poultry..." << std::endl;
}

GrilledPoultry::~GrilledPoultry() {
    /**
     * @brief Virtual destructor for the GrilledPoultry class.
     */
}

double GrilledPoultry::getPrice(){
    return 162.90;
}
