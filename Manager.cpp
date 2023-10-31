#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::handleComplaint(string c,int degree)
{
    if(degree>3)
    {
        if ( c.compare("Food")==0)
        {
            cout<<"I'm truly sorry to hear that you're not satisfied with your meal."<<endl;
            cout<<"We would be happy to make you a fresh dish right away.On the house."<<endl;
        }
        if(c.compare("Time")==0)
        {
            cout<<"I'm genuinely sorry for the extended wait you've experienced. We understand how valuable your time is."<<endl;
            cout<<"The matter has been addressed with our Chefs. Your order will be ready shortly."<<endl;
        }
    }
    if(c.compare("Service")==0)
    {
        cout<<"I'm truly sorry for the service you've experienced. It's important to us, and we value your feedback."<<endl;
        cout<<"Further investigation will be done. We promise this Kind of behaviour from any of our stuff will not repeat itself.There will be a 10% discount for your order."<<endl;
    }
}