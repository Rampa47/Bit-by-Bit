#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <iostream>
#include "Colleague.h"
class Colleague;
class Mediator
{
    public:
      virtual ~Mediator();
       void notifications(std::string to,std::string message);
       void registerMe(Colleague* c);
    
    private:
    
     std::vector<Colleague*> Colleagues;
};

#endif