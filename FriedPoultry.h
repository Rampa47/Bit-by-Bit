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
     * This function represents the process of cooking fried poultry.
     */
    void cook() override;

    /**
     * @brief Virtual destructor for the FriedPoultry class.
     */
    virtual ~FriedPoultry();

    /**
     * @brief Get the price of the fried poultry.
     *
     * This function retrieves the price of the fried poultry as a double.
     * @return the price of the fried poultry
     */
    virtual double getPrice();
};

#endif
