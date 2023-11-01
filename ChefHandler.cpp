#include "ChefHandler.h"


ChefHandler::ChefHandler()
{
    className="ChefHandler";
}


ChefHandler::~ChefHandler()
{

}

void ChefHandler::addSuccessor(ChefHandler* c)
{
    if(successor==nullptr)
    {
        successor=c;
    }
    else
    {
        successor->addSuccessor(c);
    }
}
void ChefHandler::receive(std::string to,std::string message,Colleague* me){
    std::cout<<"Chefs you have a notification: " << message <<std::endl;
 }
   void  ChefHandler::send(std::string to,std::string message){
    std::cout<<"HeadChef who would you like to Notify?"<<std::endl;
    std::cin>>to;
    std::cout<<"HeadChef what is your message to the receiver?"<<std::endl;
    std::cin>>message;

    mediator->notifications(to,message,this);
 }
