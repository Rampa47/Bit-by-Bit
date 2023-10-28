#include "Customer.h"

Customer::Customer()
{
    name = "";
    Classname="Customer";
}

Customer::Customer(std::string name)
{
    this->name = name;
    Classname="Customer";
}

std::string Customer::getName()
{
    return name;
}
void Customer::receive(std::string to,std::string message){
       std::cout<<"Customer: "<<getName()<<" Message: "<<message<<std::endl;
}
 void Customer::send(std::string to,std::string message){

          mediator.notify(to,message);
 }