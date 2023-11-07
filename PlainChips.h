#ifndef PLAINCHIPS_H
#define PLAINCHIPS_H

#include "Chips.h"

/**
 * @class PlainChips
 * @brief Represents a specific type of chips known as plain chips.
 */
class PlainChips : public Chips {
public:
    /**
     * @brief Virtual destructor for the PlainChips class.
     */
    virtual ~PlainChips();

    /**
     * @brief Cooks the plain chips.
     *
     * This function represents the process of cooking plain chips.
     */
    void cook() override;

    /**
     * @brief Get the price of the plain chips.
     *
     * This function retrieves the price of the plain chips.
     * @return the price of the plain chips
     */
    virtual double getPrice();
};

#endif
