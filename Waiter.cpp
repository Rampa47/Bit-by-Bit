#include "Waiter.h"

Waiter::Waiter()
{
}

Waiter::~Waiter()
{
}

void Waiter::handleComplaint(string c, int degree)
{
    if(degree<3 &&c.compare("Time")==0)
    {
        cout<<"I apologise for the wait we have caused."<<endl;
        cout<<"Thank your for your patience. Your order will be ready shortly."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }
}