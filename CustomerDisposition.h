#ifndef DISPOSITION_H
#define DISPOSITION_H

#include <string>
#include <memory>
#include <iostream>

class Waiter;

/**
 * This class represents the current state of the customer.
*/
class CustomerDisposition{
    public:
        enum moodDirection{positive, negative}; /**< Controls the changing of the customer mood*/
        /**
         * @brief This function uses the current mood of the customer to interact with the table's waiter.
         * The result of this function call depends on the concrete customer disposition of the customer 
         * (happy, content, or angry) at the time of the call.
         * @param waiter is the waiter associated with the table in which the customer resides
        */
        virtual void expressMood(std::shared_ptr<Waiter> waiter) =0; /**< Mood dependent functionality of customer*/

        /**
         * @brief Returns the next concrete CustomerDisposition object.
         * @param nextMood Indicates the target mood.
         * moodDirection::positive returns the next, more positive mood, while moodDirection::positive does the opposite.
        */
        virtual std::shared_ptr<CustomerDisposition> getNextMood(enum moodDirection nextMood) =0;
};

#include "HappyMood.h"
#include "ContentMood.h"
#include "UnhappyMood.h"

#endif