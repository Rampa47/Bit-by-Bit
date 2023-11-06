#ifndef JALAPENOCHIPSAUCE_H
#define JALAPENOCHIPSAUCE_H

#include "ChipSauce.h"

/**
 * @class JalapenoChipSauce
 * @brief Represents a type of sauce for chips: jalapeno-based sauce.
 */
class JalapenoChipSauce : public ChipSauce 
{
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
         */
        void cook() override;

        /**
         * @brief Get the price of the food item.
         * @return the price of the food item
         */
        virtual double getPrice();
};

#endif
