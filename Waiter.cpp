

#include "Waiter.h"
#include <iostream>
#include "Order.h" // Include necessary headers for other classes if used
#include <random>

Waiter::Waiter(int wNum, ChefHandler* chef) {
    this->waiterNumber = wNum;
    this->order = nullptr;
    className="Waiter"; 
    this->chef=chef;
    //greetCustomer();




   
}
void Waiter::checkCustomer()
{
    cout<<"Are you ready to order now?"<<endl;
}

void Waiter::greetCustomer() {
    cout<<"Waiter " << waiterNumber <<" greets customers and presents menu..."<<endl;
}


void Waiter::handleComplaint(string c, int degree) 
{

    if(degree<3 && c.compare("Time")==0)
    {
        cout<<"Waiter handling complaint: ";
        cout<<"I apologise for the wait we have caused.Thank you for your patience. Your order will be ready soon."<<endl;
    }
    else
    {
        next->handleComplaint(c,degree);
    }

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



void Waiter::takeOrder(Order* order) {
    if (this->order!=NULL) 
        delete this->order;
    this->order= order;
    chef->handleOrder(order);

}


Waiter::~Waiter(){
    if (this->order!=NULL) 
        delete this->order;
}


void Waiter::receive(std::string to, std::string message) {
    std::cout<<"Waiter "<<waiterNumber<<" message: "<< message <<std::endl;
}

void Waiter::send() {
    std::string message = "";
    std::string to = "";
    std::cout << "Waiter: Sending order to the Chef now..." << std::endl;

    while (true) {
        
        srand(static_cast<unsigned int>(time(0))); 

        int availability = rand() % 2; 
        std::cout << "***checking poultry chefs availability**" << std::endl;
        if (availability == 1) { 
            to = "Poultry Chef";
            message = "Here is my order for table: " + std::to_string(waiterNumber);
            std::cout << "Chef is available. Order is placed" << std::endl;
            mediator->notifications(to, message);
            break; // Chef is available, exit the loop
        } else {
            std::cout << "Chef is not available at the moment. Retrying in 10 seconds." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(10));
        }
    }
}




void Waiter::saveBillAmountToTextFile(double billAmount ,string name , int contact,int ID) {

    ofstream file("tabs.txt");
    if (file.is_open()) {
        file << name << ID;
        file << contact;
        file << billAmount;
        file.close();
    } else {
        cout << "Error: Unable to save bill amount." << endl;
    }

}
/*
void Waiter::retrieveBillAmountFromTextFile()  {
    double billAmount = 0.0;
    string custName ;
    int custContact, custId;
    ifstream file("tabs.txt");
    if (file.is_open()) {
        file >> custName >> custId;
        file >> custContact;
        file >> billAmount;
        file.close();
    } else {
        cout << "Error: Unable to retrieve bill amount." << endl;
    }
    this->currentBillAmount=billAmount;
    presentBill();

}*/


const int Waiter::getWaiterNumber(){
    return waiterNumber;
}

std::string Waiter::getClassname(){
    return "Waiter";
}

void Waiter::generateBill()
{
    cout<<"**Generating customer Bill(s) "<<endl;

}