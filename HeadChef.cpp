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
        cout<<"Head chef handling Food complaint...\n";
        ThreadSleep::threadSleep(200);
    }
    else
    {
        next->handleComplaint(c,degree);
    }
}



void HeadChef::send(){
    mediator->notifications("Waiter","Order is ready.");
}