#include "ChefHandler.h"


ChefHandler::ChefHandler(): successor(NULL)
{

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
void ChefHandler::receive(std::string to,std::string message){
    std::cout<<"Chefs you have a notification: " << message <<std::endl;
 }
   void  ChefHandler::send(){
    std::string message = "";
    std::string to = "";
    std::cout << "Chef would you like to send the order to the Waiter now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

    std::cin >> to;
    if (to == "1") {
     to = "Waiter";
    message = "Here is your order for your table from Chef.";
    } else {
        return; 
    }

    mediator->notifications(to,message,this);
 }
std::string ChefHandler::getClassname(){
    return "ChefHandler";
}