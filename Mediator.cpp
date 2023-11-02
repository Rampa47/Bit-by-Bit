
#include "Mediator.h"
#include <iostream>
using namespace std;

Mediator::~Mediator()
{
  ChefAndMaitreD.clear();
  TablesAndWaiters.clear();
}
void Mediator::notifications(std::string to, std::string message, Colleague* me)
{
  if (to == "ChefHandler" || to == "MaitreD")
  {
    
    
      for (Colleague *colleague : ChefAndMaitreD)
      {
        if (colleague->getClassname() == to)
        {
          colleague->receive(to, message, me);
        }
      }
    
    
  }
  else
  {
    // problem is the Maitre D needs to know to which waiter to send the complaint to meaning what is the waiter number
    
      for (Colleague *colleague : TablesAndWaiters)
      {
        if (colleague->getClassname == to)
        {
        
          colleague->receive(to, message, me);
        }
      }
    
    
  }
}

void Mediator::registerMe(Colleague *c)
{
  if (c->getClassname() == "ChefHandler" || c->getClassname() == "MaitreD")
  {
    ChefAndMaitreD.push_back(c);
  }
  else
  {
    TablesAndWaiters.push_back(c);
  }
}