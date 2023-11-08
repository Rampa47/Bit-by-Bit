#ifndef CHIPSAUCE_H
#define CHIPSAUCE_H

#include "Chips.h"

/**
 * @class ChipSauce
 * @brief Represents a specific type of sauce intended for chips.
 */
class ChipSauce : public Chips {
protected:
    Chips* chips; // Pointer to Chips

public:
    /**
     * @brief Constructor for the ChipSauce class.
     *
     * @param chips A pointer to the Chips associated with the sauce.
     */
    ChipSauce(Chips* chips);

    /**
     * @brief Virtual destructor for the ChipSauce class.
     */
    virtual ~ChipSauce();

    /**
     * @brief Cooks the chip sauce (pure virtual).
     *
     * This function, when implemented in derived classes, is responsible for cooking the chip sauce.
     */
    virtual void cook() = 0;

    /**
     * @brief Get the price of the chip sauce.
     *
     * This function retrieves the price of the chip sauce as a double.
     *
     * @return the price of the chip sauce
     */
    virtual double getPrice() = 0;
};

#endif
