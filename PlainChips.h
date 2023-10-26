#ifndef PLAINCHIPS_H
#define PLAINCHIPS_H

#include "Chips.h"

/**
 * @class PlainChips
 * @brief Represents a specific type of chips: plain chips.
 */
class PlainChips : public Chips {
public:
    /**
     * @brief Virtual destructor for the PlainChips class.
     */
    virtual ~PlainChips();

    /**
     * @brief Cooks the plain chips.
     */
    void cook() override;
};

#endif
