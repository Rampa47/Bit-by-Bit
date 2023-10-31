#include "../include/UnhappyMood.h"

/**
 * @brief Files a complaint (or multiple complaints) to the waiter (chain of responsibility).
*/
void UnhappyMood::expressMood(std::shared_ptr<Waiter> waiter)
{
    std::cout << "Customer Mood: Unhappy - Complaint filed" << std::endl;
    //waiter->handleComplaint(<Complaint>)
}

std::shared_ptr<CustomerDisposition> UnhappyMood::getNextMood(enum moodDirection nextMood){
    switch (nextMood)
    {
        case moodDirection::positive:
            return std::make_shared<ContentMood>();
            break;
        
        case moodDirection::negative:
            return std::make_shared<UnhappyMood>();
            break;
        default:
            return std::make_shared<UnhappyMood>();
            break;
    }
}