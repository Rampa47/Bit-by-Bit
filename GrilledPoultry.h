#ifndef GRILLEDPOULTRY_H
#define GRILLEDPOULTRY_H

#include "PoultryType.h"

/**
 * @class GrilledPoultry
 * @brief Represents grilled poultry as a specific type of poultry.
 */
class GrilledPoultry : public PoultryType 
{
    public:
        /**
         * @brief Cooks the grilled poultry.
         *
         * This implementation represents the cooking process for grilled poultry.
         */
        void cook() override;

        /**
         * @brief Virtual destructor for the GrilledPoultry class.
         */
        virtual ~GrilledPoultry();
        
        /**
         * @brief Get the price of the food item.
         * @return the price of the food item
         */
        virtual double getPrice();
};

#endif
