//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_MEDIATOR_H
#define INC_214_PROJECT_MEDIATOR_H

#include "Colleague.h"
#include <iostream>
#include <vector>
class Mediator {
private:
    std::vector<Colleague*> Colleagues;
public:
    void notify(Fooditem* preparedFood,Waiter* waiter,std::string from,std::string message);
    void registerme(Colleague* c);
};


#endif //INC_214_PROJECT_MEDIATOR_H
