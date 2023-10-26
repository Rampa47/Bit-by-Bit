#ifndef POULTRY_H
#define POULTRY_H

#include "PoultryType.h"
#include "FoodItem.h"

/**
 * @class Poultry
 * @brief Represents a type of food item: poultry dish.
 */
class Poultry: public FoodItem {
private:
    PoultryType* poultryType; // Pointer to the type of poultry

public:
    /**
     * @brief Constructor for the Poultry class.
     *
     * @param type A pointer to the type of poultry for the dish.
     */
    Poultry(PoultryType* type);

    /**
     * @brief Cooks the poultry dish using the specified poultry type.
     */
    void cook();

    /**
     * @brief Set the type of poultry for the dish.
     *
     * @param type A pointer to the type of poultry to set.
     */
    void setPoultryType(PoultryType* type);

    /**
     * @brief Destructor for the Poultry class.
     */
    virtual ~Poultry();
};

#endif
