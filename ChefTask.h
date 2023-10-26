#ifndef CHEFTASK_H
#define CHEFTASK_H

/**
 * @class ChefTask
 * @brief Abstract base class for chef tasks.
 */
class ChefTask {
public:
    /**
     * @brief Handles an order placed by a waiter.
     *
     * This is a pure virtual function that needs to be implemented by derived classes.
     *
     * @param waiter The ID of the waiter who placed the order.
     */
    virtual void handleOrder() = 0;

    /**
     * @brief Virtual destructor for the ChefTask class.
     */
    virtual ~ChefTask() = default;
};

#endif