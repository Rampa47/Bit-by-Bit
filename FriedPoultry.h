#ifndef FRIEDPOULTRY_H
#define FRIEDPOULTRY_H

#include "PoultryType.h"

/**
 * @class FriedPoultry
 * @brief Represents fried poultry as a specific type of poultry.
 */
class FriedPoultry : public PoultryType {
public:
    /**
     * @brief Cooks the fried poultry.
     *
     * This implementation represents the cooking process for fried poultry.
     */
    void cook() override;

    /**
     * @brief Virtual destructor for the FriedPoultry class.
     */
    virtual ~FriedPoultry();
};

#endif
