#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::handleComplaint(string c,int degree)
{
    if(c.compare("Service")==0)
    {
        cout<<"Manager handling Service complaint...\n";
    }
    if(degree>3)
    {
        if ( c.compare("Food")==0)
        {
            cout<<"Manager handling Food complaint, complaint is too severe...\n";
        }
        if(c.compare("Time")==0)
        {
             cout<<"Manager handling Time complaint, complaint is too severe...\n";

        }
        
    }
    
}

