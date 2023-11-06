#include "PlainChips.h"
#include <iostream>

PlainChips::~PlainChips() 
{
    /**
     * @brief Destructor for the PlainChips class.
     */
}

void PlainChips::cook() 
{
    /**
     * @brief Cooks the plain chips.
     */
    std::cout << "  Preparing the Chips..." << std::endl;
    std::cout << "      Frying plain chips..." << std::endl;
}


double PlainChips::getPrice()
{
    return 49.99;
}