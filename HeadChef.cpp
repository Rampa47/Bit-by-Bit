#include "HeadChef.h"
#include "Order.h"

HeadChef::HeadChef()
{
}

HeadChef::~HeadChef()
{
}

void HeadChef::handleOrder(Order* order)
{
    std::cout << "Order passed on to the Head Chef..." << std::endl;
    cout << "Waiter " << order->getWaiter() << " order almost ready" <<endl;
    cout<<"Putting the Finishing Strokes... "<<endl;
    ThreadSleep::threadSleep();
    order->changeStateOfOrder();
    send();
    ThreadSleep::threadSleep();
    
}

void HeadChef::handleComplaint(string c, int degree)
{
    if (degree<3&&c.compare("Food")==0)
    {
        cout<<"Headchef handling complaint: ";
        cout<<"We're sorry that your meal didn't live up to your taste preferences.We would be happy to make you a fresh dish right away."<<endl;
        cout<<"Complaint handled by HeadChef."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }
}

void HeadChef::addNext(ComplaintsHandler* c)
{
    if(next==NULL)
    {
        next=c;
    }
    else
    {
        next->addNext(c);
    }
}

void HeadChef::send()
{
    mediator->notifications("Waiter","Order is ready.");
}