#ifndef POULTRYTYPE_H
#define POULTRYTYPE_H

/**
 * @class PoultryType
 * @brief Abstract base class for poultry types.
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
     * This is a pure virtual function that needs to be implemented by derived classes.
     */
    virtual void cook() = 0;
};

#endif
