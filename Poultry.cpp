#include "Poultry.h"
#include "PoultryType.h"
#include <iostream>

Poultry::Poultry(PoultryType* type) : poultryType(type) {
}

void Poultry::cook() {
    std::cout << "  Preparing the Poultry..." << std::endl;
    poultryType->cook();
}

string Poultry::getName() {
    return "Poultry";
}

void Poultry::setPoultryType(PoultryType* type) {
    poultryType = type;
}

Poultry::~Poultry() {
    delete poultryType;
}

double Poultry::getPrice(){
    return poultryType->getPrice();
}
