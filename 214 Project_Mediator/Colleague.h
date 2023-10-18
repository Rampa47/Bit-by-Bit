//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_COLLEAGUE_H
#define INC_214_PROJECT_COLLEAGUE_H
#include <iostream>
#include "Waiter.h"
#include "Fooditem.h"
class Mediator;
class Colleague {
public:
    virtual void receive(Fooditem* preparedfood,Colleague* c,std::string to,std::string message) = 0;
    virtual void send(std::string to) = 0;
    void reg(Mediator*);
    std::string getname();
    std::string name;
private:
    Mediator* m;
};


#endif //INC_214_PROJECT_COLLEAGUE_H
