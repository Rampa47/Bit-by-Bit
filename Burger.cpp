#include "Burger.h"
#include <iostream>

void Burger::cook() {
    std::cout << "  Preparing burger..." << std::endl;
    addBuns();
    addPatty();
    addCheese();
    addSalads();
}

void Burger::addBuns() {
    std::cout << "      Adding buns..." << std::endl;
}

void Burger::addSalads() {
    std::cout << "      Adding salads..." << std::endl;
}

void Burger::addCheese() {
    std::cout << "      Adding cheese..." << std::endl;
}

string Burger::getName()
{
    return "Burger";
}

Burger::~Burger() {
}
