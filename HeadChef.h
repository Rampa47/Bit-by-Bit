#ifndef HEADCHEF_H
#define HEADCHEF_H
#include "ChefHandler.h"
#include "ComplaintsHandler.h"
/**
 * @class HeadChef
 * @brief Represents a Head Chef responsible for complete the plating.
 */
class HeadChef:public ChefHandler, public ComplaintsHandler
{
public:
    /**
     * @brief Construct a new HeadChef object.
     *
     * This constructor initializes a new instance of the HeadChef class.
     */
    HeadChef();

    /**
     * @brief Destroy the HeadChef object.
     *
     * This virtual destructor is responsible for cleaning up any resources
     * associated with the HeadChef object.
     */
    virtual ~HeadChef();

    /**
     * @brief Handle a food order.
     *
     *  This function is responsible for completing the plating and adding the final touches before order can be sent to a customer
     *
     * @param order An order object representing the customer order.
     */
    void handleOrder(Order* order);

    void handleComplaint(string c, int degree);
};

#endif