#include "TomatoChipSauce.h"
#include <iostream>

TomatoChipSauce::TomatoChipSauce(Chips* chips) : ChipSauce(chips) {
    /**
     * @brief Constructor for the TomatoChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
}

void TomatoChipSauce::cook() {
    /**
     * @brief Adds the tomato chip sauce.
     */
    chips->cook();
    std::cout << "Cooking tomato chip sauce..." << std::endl;
}

TomatoChipSauce::~TomatoChipSauce() {
    /**
     * @brief Virtual destructor for the TomatoChipSauce class.
     */
}
