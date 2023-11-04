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
    order->changeStateOfOrder();
    cout<<"Putting the Finishing Strokes... "<<endl;
    cout << "Waiter " << order->getWaiter() << " order is ready..." <<endl;
    
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
