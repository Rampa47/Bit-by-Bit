#include "Burger.h"
#include <iostream>

void Burger::cook() {
    /**
     * @brief Cooks the burger.
     *
     * This function represents the cooking process for a burger.
     */
    std::cout << "Preparing burger..." << std::endl;
    addBuns();
    addPatty();
    addCheese();
    addSalads();
}

void Burger::addBuns() {
    /**
     * @brief Adds buns to the burger.
     */
    std::cout << "Adding buns..." << std::endl;
}

void Burger::addSalads() {
    /**
     * @brief Adds salads to the burger.
     */
    std::cout << "Adding salads..." << std::endl;
}

void Burger::addCheese() {
    /**
     * @brief Adds cheese to the burger.
     */
    std::cout << "Adding cheese..." << std::endl;
}

string Burger::getName()
{
    return "Burger";
}

Burger::~Burger() {
    /**
     * @brief Virtual destructor for the Burger class.
     */
}
