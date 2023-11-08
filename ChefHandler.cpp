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
    std::cout<<message <<std::endl;
 }
void  ChefHandler::send(){
    mediator->notifications("Waiter","Order is ready");
}
std::string ChefHandler::getClassname(){
    return "ChefHandler";
}