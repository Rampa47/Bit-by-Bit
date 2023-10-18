//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_WAITER_H
#define INC_214_PROJECT_WAITER_H
#include "Colleague.h"

class Waiter: public Colleague {
public:
    Waiter();
    std::string getname();
    std::string name;
    void send(std::string to);
};


#endif //INC_214_PROJECT_WAITER_H
