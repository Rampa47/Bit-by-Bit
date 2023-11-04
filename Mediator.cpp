
#include "Mediator.h"
#include <iostream>
using namespace std;

Mediator::~Mediator()
{
    Chef.clear();
    Tables.clear();
    Waiter.clear();
}
void Mediator::notifications(std::string to, std::string message)
{
    if (to == "ChefHandler" )
    {

            for (Colleague *colleague : Chef)
            {
                if (colleague->getClassname() == to)
                {
                    colleague->receive(to, message);
                }
            }



    }
    else
    {
        // problem is the Maitre D needs to know to which waiter to send the complaint to meaning what is the waiter number
        if (to == "Waiter")
        {
            for (Colleague *colleague : Waiter)
            {


                    std::string waiterSendingTo = "Waiter " ;

                    colleague->receive(waiterSendingTo, message);

                Colleague* temp =  Waiter[0];


                Waiter.erase( Waiter.begin());


                Waiter.push_back(temp);
                Colleague* temp2 =  Tables[0];


                Tables.erase( Tables.begin());


                Tables.push_back(temp2);
                break;

            }
        }
        else if(to == "Table")
        {
            for (Colleague *colleague : Tables)
            {


                colleague->receive(to, message);
                Colleague* temp =  Tables[0];


                Tables.erase( Tables.begin());


                Tables.push_back(temp);

                Colleague* temp2 =  Waiter[0];


                Waiter.erase( Waiter.begin());


                Waiter.push_back(temp2);
                break;

            }
        }
    }
}

void Mediator::registerMe(Colleague *c)
{
    if (c->getClassname() == "ChefHandler")
    {
        Chef.push_back(c);
    }
    else
    {
        if(c->getClassname()=="Waiter"){
            Waiter.push_back(c);
        }
        else if(c->getClassname()=="Table")
        {

            Tables.push_back(c);
        }

    }
}