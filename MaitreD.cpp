#include "MaitreD.h"

MaitreD::MaitreD()
{
    //need implementation
}

MaitreD::MaitreD(MaitreD&)
{
    //need implementation
}

MaitreD * MaitreD::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
    }

    return maitreD;
}

void MaitreD::receive(std::string to,std::string message)
{
  std::cout<<"MaitreD Message: "<<message<<std::endl;
}

void MaitreD::send(std::string to,std::string message)
{
    
    mediator.notify(to,message);
}

void MaitreD::handleComplaint(string c, int degree)
{
    if (degree<3&&c.compare("Food")==0)
    {
        cout<<"We're sorry that your meal didn't live up to your taste preferences."<<endl;
        cout<<"We would be happy to make you a fresh dish right away."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }
}