#ifndef TOMATOCHIPSAUCE_H
#define TOMATOCHIPSAUCE_H

#include "ChipSauce.h"

/**
 * @class TomatoChipSauce
 * @brief Represents a sauce for chips, specifically a tomato-based sauce.
 */
class TomatoChipSauce : public ChipSauce {
public:
    /**
     * @brief Constructor for the TomatoChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
    TomatoChipSauce(Chips* chips);

    /**
     * @brief Virtual destructor for the TomatoChipSauce class.
     */
    virtual ~TomatoChipSauce();

    /**
     * @brief Adds the tomato chip sauce.
     *
     * This function adds the tomato chip sauce to the associated chips.
     */
    void cook() override;

    /**
     * @brief Get the price of the tomato chip sauce.
     *
     * This function retrieves the price of the tomato chip sauce as a double.
     * @return the price of the tomato chip sauce
     */
    virtual double getPrice();
};

#endif
