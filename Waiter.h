#ifndef WAITER_H
#define WAITER_H
#include "ComplaintsHandler.h"

/**
 * @class Waiter
 *
 * @brief One of the handlers responsible for handling customer complaints.
 *
 */
class Waiter: public ComplaintsHandler
{
    public:
        /**
         * @brief Constructor for a Waiter object.
         */
        Waiter();

        /**
         * @brief Destructor for the Waiter object.
         */
        virtual ~Waiter();

       /**
         * @brief Handle a customer complaint with a specified degree of severity.
         *
         * This function handles customer complaints based on their degree of severity and the type
         * of complaint. It provides responses and potential resolutions for different complaint types.
         *
         * @param c The type of the customer's complaint.
         * @param degree The degree of severity of the complaint.
         */
        void handleComplaint(string c, int degree);
};
#endif
