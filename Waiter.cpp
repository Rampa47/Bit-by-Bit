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
 void Waiter::receive(std::string to,std::string message){
     std::cout<<"Waiter "<<waiterNumber<<" message: "<< message <<std::endl;
 }
  void  Waiter::send(){
     std::string message = "";
    std::string to = "";
    std::cout << "Waiter would you like to send the order to the Chef now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

    std::cin >> to;
    if (to == "1") {
     to = "ChefHandler";
     message = "Here is my order for table: "+ waiterNumber;
    } else {
        return; 
    }

    mediator->notifications(to,message,this);
 }
 std::string Waiter::getClassname(){
    return "Waiter";
}
void Waiter::setWaiterNumber(int waiternumber){
    this->waiterNumber=waiternumber;

}