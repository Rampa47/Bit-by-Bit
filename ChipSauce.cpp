#include "ChipSauce.h"

ChipSauce::ChipSauce(Chips* chips) : chips(chips) {
}

ChipSauce::~ChipSauce() {
    delete chips;
}
