#include "Poultry.h"
#include "PoultryType.h"
#include <iostream>

Poultry::Poultry(PoultryType* type) : poultryType(type) {
    /**
     * @brief Constructor for the Poultry class.
     *
     * @param type A pointer to the type of poultry for the dish.
     */
}

void Poultry::cook() {
    /**
     * @brief Cooks the poultry dish using the specified poultry type.
     */
    std::cout << "  Preparing the Poultry..." << std::endl;
    poultryType->cook(); // Delegate the cooking to the specified poultry type
}

string Poultry::getName()
{
    return "Poultry";
}

void Poultry::setPoultryType(PoultryType* type) {
    /**
     * @brief Set the type of poultry for the dish.
     *
     * @param type A pointer to the type of poultry to set.
     */
    poultryType = type;
}

Poultry::~Poultry() {
    /**
     * @brief Destructor for the Poultry class.
     */
    delete poultryType; // Release the allocated memory for the poultry type
}

double Poultry::getPrice(){
    return poultryType->getPrice();
}
