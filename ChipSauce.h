#ifndef CHIPSAUCE_H
#define CHIPSAUCE_H

#include "Chips.h"

/**
 * @class ChipSauce
 * @brief Represents a type of sauce for chips.
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
     */
    virtual void cook() = 0;
};

#endif
