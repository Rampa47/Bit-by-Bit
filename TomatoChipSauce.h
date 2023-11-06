#ifndef TOMATOCHIPSAUCE_H
#define TOMATOCHIPSAUCE_H

#include "ChipSauce.h"

/**
 * @class TomatoChipSauce
 * @brief Represents a type of sauce for chips: tomato-based sauce.
 */
class TomatoChipSauce : public ChipSauce 
{
    public:
        /**
         * @brief Constructor for the TomatoChipSauce class.
         *
         * @param chips A pointer to the Chips associated with the sauce.
         */
        TomatoChipSauce(Chips* chips);

        /**
         * @brief Virtual destructor for the TomatoChipSauce class.
         */
        virtual ~TomatoChipSauce();

        /**
         * @brief Adds the tomato chip sauce.
         */
        void cook() override;

        /**
         * @brief Get the price of the food item.
         * @return the price of the food item
         */
        virtual double getPrice();
};

#endif
