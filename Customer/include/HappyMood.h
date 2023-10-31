#ifndef HAPPYMOOD_H
#define HAPPYMOOD_H

#include "CustomerDisposition.h"

class HappyMood : public CustomerDisposition{

public:
    void expressMood(std::shared_ptr<Waiter> waiter);
    std::shared_ptr<CustomerDisposition> getNextMood(enum moodDirection nextMood);
};

#endif