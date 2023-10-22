#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include <iostream>
#include "Mediator.h"
class Mediator;
class Colleague
{
    public:
       virtual ~Colleague();
       virtual void receive(std::string to,std::string message)=0;
       virtual void send(std::string to,std::string message)=0;
       void reg(Mediator* m);
       std::string getClassname();

    
    private:
    Mediator* mediator;
    std::string Classname;
};

#endif