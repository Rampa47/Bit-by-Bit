#ifndef JALAPENOCHIPSAUCE_H
#define JALAPENOCHIPSAUCE_H

#include "ChipSauce.h"

/**
 * @class JalapenoChipSauce
 * @brief Represents a specific type of sauce for chips, specifically a jalapeno-based sauce.
 */
class JalapenoChipSauce : public ChipSauce {
public:
    /**
     * @brief Constructor for the JalapenoChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
    JalapenoChipSauce(Chips* chips);

    /**
     * @brief Virtual destructor for the JalapenoChipSauce class.
     */
    virtual ~JalapenoChipSauce();

    /**
     * @brief Adds the jalapeno chip sauce.
     *
     * This function adds the jalapeno chip sauce to the associated chips.
     */
    void cook() override;

    /**
     * @brief Get the price of the jalapeno chip sauce.
     *
     * This function retrieves the price of the jalapeno chip sauce as a double.
     *
     * @return the price of the jalapeno chip sauce
     */
    virtual double getPrice();
};

#endif
