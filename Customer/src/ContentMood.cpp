#include "../include/ContentMood.h"

void ContentMood::expressMood(std::shared_ptr<Waiter> waiter)
{
    std::cout << "Customer Mood: Content - Waiter being tipped (lesser amount)" << std::endl;
}

std::shared_ptr<CustomerDisposition> ContentMood::getNextMood(enum moodDirection nextMood)
{
    switch (nextMood)
    {
        case moodDirection::positive:
            return std::make_shared<HappyMood>();
            break;
        
        case moodDirection::negative:
            return std::make_shared<UnhappyMood>();
            break;
        default:
            return std::make_shared<ContentMood>();
            break;
    }
}