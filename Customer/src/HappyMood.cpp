#include "../include/HappyMood.h"

/**
 * @brief Provides functionality to tip waiter
*/
void HappyMood::expressMood(std::shared_ptr<Waiter> waiter)
{
    std::cout << "Customer Mood: Happy - Waiter being tipped" << std::endl;
    //Tipping waiter logic
}

std::shared_ptr<CustomerDisposition> HappyMood::getNextMood(enum moodDirection nextMood)
{

    switch (nextMood)
    {
        case moodDirection::positive:
            return std::make_shared<HappyMood>();
            break;
        
        case moodDirection::negative:
            return std::make_shared<ContentMood>();
            break;
        default:
            return std::make_shared<HappyMood>();
            break;
    }
}