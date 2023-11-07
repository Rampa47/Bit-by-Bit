#ifndef POULTRYTYPE_H
#define POULTRYTYPE_H

/**
 * @class PoultryType
 * @brief Abstract base class for different types of poultry.
 */
class PoultryType {
public:
    /**
     * @brief Virtual destructor for the PoultryType class.
     */
    virtual ~PoultryType() = default;

    /**
     * @brief Cooks the poultry.
     *
     * This is a pure virtual function that must be implemented by derived classes to cook the specific type of poultry.
     */
    virtual void cook() = 0;

    /**
     * @brief Get the price of the poultry item.
     *
     * This function retrieves the price of the specific poultry type.
     * @return the price of the specific poultry item
     */
    virtual double getPrice() = 0;
};

#endif
