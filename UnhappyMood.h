#ifndef UNHAPPYMOOD_H
#define UNHAPPYMOOD_H

#include "CustomerDisposition.h"

class UnhappyMood : public CustomerDisposition{
    
public:
    void expressMood(std::shared_ptr<Waiter> waiter);
    std::shared_ptr<CustomerDisposition> getNextMood(enum moodDirection nextMood);
};

#endif