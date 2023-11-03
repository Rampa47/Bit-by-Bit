#ifndef FOODCOMPLAINT_H
#define FOODCOMPLAINT_H
#include "Complaint.h"

/**
 * @class FoodComplaint
 *
 * @brief Class for food-related complaints.
 *
 */
class FoodComplaint: public Complaint
{

    public:
        /**
         * @brief Constructor for a FoodComplaint object.
         *
         * @param handler A pointer to the ComplaintsHandler responsible for handling the complaint.
         */
        FoodComplaint(ComplaintsHandler* handler);

        /**
         * @brief Destructor for the FoodComplaint object.
         */
        virtual ~FoodComplaint();

        /**
         * @brief Address a food-related customer complaint with a specified degree of severity.
         *
         * This function handles food-related customer complaints by notifying the specified ComplaintsHandler.
         *
         * @param complaint The description of the food related complaint.
         * @param degree The degree of severity of the complaint.
         */
        void AddressComplaint(string complaint);
};
#endif
