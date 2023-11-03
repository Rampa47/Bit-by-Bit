#include "JalapenoChipSauce.h"
#include <iostream>

JalapenoChipSauce::JalapenoChipSauce(Chips* chips) : ChipSauce(chips) {
    /**
     * @brief Constructor for the JalapenoChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
}

void JalapenoChipSauce::cook() {
    /**
     * @brief Adds the jalapeno chip sauce.
     */
    chips->cook();
    std::cout << "Adding jalapeno chip sauce..." << std::endl;
}

JalapenoChipSauce::~JalapenoChipSauce() {
    /**
     * @brief Virtual destructor for the JalapenoChipSauce class.
     */
}

double JalapenoChipSauce::getPrice(){
    return chips->getPrice()+7.99;
}
