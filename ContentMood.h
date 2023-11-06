#ifndef CONTENTMOOD_H
#define CONTENTMOOD_H

#include "CustomerDisposition.h"

class ContentMood : public CustomerDisposition
{   
    public:
        void expressMood(std::shared_ptr<Waiter> waiter);
        std::shared_ptr<CustomerDisposition> getNextMood(enum moodDirection nextMood);
};

#endif