#include "TomatoChipSauce.h"
#include <iostream>

TomatoChipSauce::TomatoChipSauce(Chips* chips) : ChipSauce(chips) {
}

void TomatoChipSauce::cook() {
    chips->cook();
    std::cout << "      Adding tomato chip sauce..." << std::endl;
}

TomatoChipSauce::~TomatoChipSauce() {
}

double TomatoChipSauce::getPrice(){
    return chips->getPrice() + 5.99;
}
