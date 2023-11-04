#ifndef TIMECOMPLAINT_H
#define TIMECOMPLAINT_H
#include "Complaint.h"

/**
 * @class TimeComplaint
 *
 * @brief Class for Time-related complaints.
 *
 */
class TimeComplaint:public Complaint
{
    public:
        /**
         * @brief Constructor for a TimeComplaint object.
         *
         * @param handler A pointer to the ComplaintsHandler responsible for handling the complaint.
         */
        TimeComplaint(ComplaintsHandler* handler,int degree);

        /**
         * @brief Destructor for the TimeComplaint object.
         */
        virtual ~TimeComplaint();

        /**
         * @brief Address a Time-related customer complaint with a specified degree of severity.
         *
         * This function handles Time-related customer complaints by notifying the specified ComplaintsHandler.
         *
         * @param complaint The description of the Time related complaint.
         * @param degree The degree of severity of the complaint.
         */
        void AddressComplaint();

        string getname();
};

#endif