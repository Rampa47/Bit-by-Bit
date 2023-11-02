#include "Waiter.h"


Waiter::Waiter()
{
    
}

Waiter::~Waiter()
{
    
}
 Waiter::Waiter(int waiterNumberToTable){
     className="Waiter"; 
     this->waiterNumber=waiterNumberToTable;
 }
void Waiter::handleComplaint(string c, int degree)
{
    if(degree<3 &&c.compare("Time")==0)
    {
        cout<<"I apologise for the wait we have caused."<<endl;
        cout<<"Thank your for your patience. Your order will be ready shortly."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }
}
 void Waiter::receive(std::string to,std::string message,Colleague* me){
     std::cout<<"Waiter "<<waiterNumber<<" message: "<< message <<std::endl;
 }
  void  Waiter::send(){
    std::string message="";
      std::string to="";
    std::cout<<"Waiter who would you like to Notify?"<<std::endl;
    std::cin>>to;
    std::cout<<"Waiter what is your message to the receiver?"<<std::endl;
    std::cin>>message;

    mediator->notifications(to,message,this);
 }
 std::string Waiter::getClassname(){
    return "Waiter";
}