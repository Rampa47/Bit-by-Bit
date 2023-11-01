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

