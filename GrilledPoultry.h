#ifndef GRILLEDPOULTRY_H
#define GRILLEDPOULTRY_H

#include "PoultryType.h"

/**
 * @class GrilledPoultry
 * @brief Represents grilled poultry as a specific type of poultry.
 */
class GrilledPoultry : public PoultryType {
public:
    /**
     * @brief Cooks the grilled poultry.
     *
     * This function represents the process of cooking grilled poultry.
     */
    void cook() override;

    /**
     * @brief Virtual destructor for the GrilledPoultry class.
     */
    virtual ~GrilledPoultry();
    
    /**
     * @brief Get the price of the grilled poultry.
     *
     * This function retrieves the price of the grilled poultry as a double.
     * @return the price of the grilled poultry
     */
    virtual double getPrice();
};

#endif
