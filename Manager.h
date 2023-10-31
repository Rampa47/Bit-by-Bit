#ifndef MANAGER_H
#define MANAGER_H
#include "ComplaintsHandler.h"

/**
 * @class Manager
 *
 * @brief One of the handler responsible for handling customer complaints.
 *
 */
class Manager: public ComplaintsHandler
{
    public:
        /**
         * @brief Constructor for a Manager object.
         */
        Manager();

        /**
         * @brief Destructor for the Manager object.
         */
        virtual ~Manager();

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