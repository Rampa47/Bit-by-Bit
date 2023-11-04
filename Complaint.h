#ifndef COMPLAINT_H
#define COMPLAINT_H
#include <string>
#include <iostream>
#include "ComplaintsHandler.h"

using namespace std;
/**
 * @class Complaint
 *
 * @brief A base class for customer complaints.
 */
class Complaint
{
    protected:
        ComplaintsHandler* handler=NULL;///< The handler responsible for addressing the complaint.
        int degree;
    public:
        /**
         * @brief Constructor for a Complaint object.
         *
         * @param handler A pointer to the ComplaintsHandler responsible for handling the complaint.
         */
        Complaint(ComplaintsHandler* handler,int degree);

        /**
         * @brief Destructor for the Complaint object.
         */
        virtual ~Complaint();


        /**
         * @brief Address a customer complaint with a specified degree of severity.
         *
         * This pure virtual function is responsible for addressing a customer complaint
         * with the given degree of severity.The inheriting classes must have their own implementation of the function.
         *
         * @param complaint The description of the customer's complaint.
         * @param degree The degree of severity of the complaint.
         */
        virtual void AddressComplaint() = 0;
};
#endif

