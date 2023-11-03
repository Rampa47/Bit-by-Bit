#ifndef CONTEXT_H
#define CONTEXT_H
#include "Complaint.h"
include "Maitre"

/**
 * @class Context
 *
 * @brief A class that  maintains a reference to one of the Complaint strategy objects.
 */
class Context
{
    private:
        Complaint* type;///< The current complaint strategy.
    public:
        /**
         * @brief Constructor for a Context object.
         *
         * @param type A pointer to the Complaint object representing the current complaint strategy.
         */
        Context(Complaint* type);

        /**
         * @brief Destructor for the Context object.
         */
        virtual ~Context();

        /**
         * @brief Address a customer complaint with a specified degree of severity.
         *
         * This function calls the current complaint strategy's AddressComplaint function so that the function 
         * can be handled accordingly.
         *
         * @param complaint The description of the customer's complaint.
         * @param degree The degree of severity of the complaint.
         */
        void AddressComplaint(string complaint, int degree);
};
#endif

