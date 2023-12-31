#ifndef SERVICECOMPLAINT_H
#define SERVICECOMPLAINT_H
#include "Complaint.h"

/**
 * @class ServiceComplaint
 *
 * @brief Class for Service-related complaints.
 *
 */
class ServiceComplaint: public Complaint
{
    public:
        /**
         * @brief Constructor for a ServiceComplaint object.
         *
         * @param handler A pointer to the ComplaintsHandler responsible for handling the complaint.
         */
        ServiceComplaint(ComplaintsHandler* handler,int degree);

        /**
         * @brief Destructor for the ServiceComplaint object.
         */
        virtual ~ServiceComplaint();

         /**
         * @brief Address a Service-related customer complaint with a specified degree of severity.
         *
         * This function handles Service-related customer complaints by notifying the specified ComplaintsHandler.
         *
         * @param complaint The description of the Service related complaint.
         * @param degree The degree of severity of the complaint.
         */
        void AddressComplaint();

        /**
         * @brief Get class name.
         *
         * This function returns the type of complaint
         */
        string getname();
};

#endif
