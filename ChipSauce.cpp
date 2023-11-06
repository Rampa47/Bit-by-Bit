#include "ChipSauce.h"

ChipSauce::ChipSauce(Chips* chips) : chips(chips) 
{
    /**
     * @brief Constructor for the ChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
}

ChipSauce::~ChipSauce() 
{
    /**
     * @brief Destructor for the ChipSauce class.
     */
    delete chips;
}
