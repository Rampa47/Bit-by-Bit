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
         */
        virtual void AddressComplaint() = 0;

        
        /**
         * @brief Set degree of a complaint.
         *
         * This function sets the degree of this complaint.
         * @param degree The degree of severity of complaint.
         */
        void setDegree(int degree);

         /**
         * @brief Get class name.
         *
         *This function returns the name of the complaint.
         */
        virtual string getname()=0;
};
#endif

