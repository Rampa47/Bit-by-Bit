#include "JalapenoChipSauce.h"
#include <iostream>

JalapenoChipSauce::JalapenoChipSauce(Chips* chips) : ChipSauce(chips) {
}

void JalapenoChipSauce::cook() {
    chips->cook();
    std::cout << "      Adding jalapeno chip sauce..." << std::endl;
}

JalapenoChipSauce::~JalapenoChipSauce() {
}

double JalapenoChipSauce::getPrice(){
    return chips->getPrice() + 7.99;
}
