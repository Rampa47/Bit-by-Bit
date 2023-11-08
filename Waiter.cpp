#include "Waiter.h"
#include "Table.h"
#include "ThreadSleep.h"
using namespace std;

Waiter::Waiter(int wNum, ChefHandler* chef) {
    this->waiterNumber = wNum;
    this->order = nullptr;
    this->currentBillAmount=0.0;
    this->chef=chef;
   
}

void Waiter::greetCustomer() {
    cout<<"Waiter " << waiterNumber<<" greets Table "<<to_string(table->getTableNumber())<<" and presents menu..."<<endl;
}

void Waiter::handleComplaint(string c, int degree) 
{

    if(degree<3 && c.compare("Time")==0)
    {
        cout<<"Waiter "<<to_string(waiterNumber)<<" handles time complaint...\n";
        ThreadSleep::threadSleep(200);
    }
    else
    {
        next->handleComplaint(c,degree);
    }

}



void Waiter::takeOrder(Order* order) {
    if (this->order!=NULL) 
        delete this->order;
    this->order= order;
    cout<<"Waiter "<<waiterNumber<<" heading to Kitchen..."<<endl;
    send();
    ThreadSleep::threadSleep();
    chef->handleOrder(order);
    cout<<"Waiter "<<waiterNumber<<" taking food to table..."<<endl;
    ThreadSleep::threadSleep();
}

Waiter::~Waiter(){
    if (order!=NULL) 
        delete order;
}

void Waiter::updateBill(double price , int quantity) {
    currentBillAmount += price *quantity;
}
void Waiter::receive(std::string to, std::string message) {
    std::cout<<message <<std::endl;
}

void Waiter::send() {
    mediator->notifications("ChefHandler","Waiter bringing order to kitchen.");
}



const int Waiter::getWaiterNumber()
{
    return waiterNumber;
}

std::string Waiter::getClassname(){
    return "Waiter";
}

 void Waiter::setTable(Table * t){
    table= t;
}

void Waiter::checkOnTable(){
    cout<<"Waiter "<<waiterNumber<< " checks if table "<<to_string(table->getTableNumber())<<" is ready to order..."<<endl;
}
void Waiter::addNext(ComplaintsHandler* c)
{
    if(next==NULL)
    {
        next=c;
    }
    else
    {
        next->addNext(c);
    }
}

