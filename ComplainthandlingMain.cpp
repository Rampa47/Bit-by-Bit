#include <iostream>
#include "Waiter.h"
#include "Manager.h"
#include"Context.h"
//#include "TimeComplaint.h"
#include "FoodComplaint.h"
#include "ServiceComplaint.h"
using namespace std;

int main() 
{
	
    ComplaintsHandler* handler= new Waiter();
    //MaitreD MD = MaitreD::instance(); add once class is fixed
    //handler->addNext( MaitreD::instance());
    //add once class is fixed
    handler->addNext(new Manager());
    Context* context[3];
   // context[0] = new Context(new TimeComplaint(handler));
    context[0]->AddressComplaint("We have been waiting for our order for over 30 minutes!",2);
    cout<<endl;

    context[1] = new Context(new FoodComplaint(handler));
    context[1]->AddressComplaint("The food is too cold!",2);
    cout<<endl;
    
    context[2] = new Context(new ServiceComplaint(handler));
    context[2]->AddressComplaint("Our waiter was rude!",5);
    cout<<endl;

    for (int i = 0; i < 3; i++)
        delete context[i];


    return 0;
}