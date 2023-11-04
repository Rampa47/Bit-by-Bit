#include "AllWaiters.h"
AllWaiters::AllWaiters(/* args */)
{
}

AllWaiters::~AllWaiters()
{
    for (Waiter* w : allwaiters) {
        delete w;
    }

    allwaiters.clear();
}

void AllWaiters::addwaiter(Waiter* w)
{
    allwaiters.push_back(w);
}

void AllWaiters::handleComplaint(string c, int degree) 
{

    if(degree<3 && c.compare("Time")==0)
    {
        cout<<"I apologise for the wait we have caused.Thank you for your patience. Your order will be ready soon."<<endl;
        cout<<"Complaint handled by waiter."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }

}
