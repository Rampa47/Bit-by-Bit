#include "ChefHandler.h"
#include <random>


ChefHandler::ChefHandler(): successor(nullptr)
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
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dis(0, 1);

    
    int random_integer = dis(gen);
    std::string message = "";
    std::string to = "";
    std::cout << "Chef would you like to send the order to the Waiter now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

    to=random_integer;
    if (to == "1") {
     to = "Waiter";
    message = "Here is your order for your table from Chef.";
    } else {
        return; 
    }

    mediator->notifications(to,message);
 }
std::string ChefHandler::getClassname(){
    return "ChefHandler";
}