#include "Waiter.h"
#include <iostream>
#include "Order.h" // Include necessary headers for other classes if used
#include <random>

Waiter::Waiter(int wNum, ChefHandler* chef) {
    this->waiterNumber = wNum;
    this->order = nullptr;
    this->currentBillAmount=0.0;
    className="Waiter"; 
    this->chef=chef;
    greetCustomer();




   
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
    if (order!=NULL) delete order;
    this->order= order;
    chef->handleOrder(order);

}

Waiter::~Waiter(){
    if (order!=NULL) delete order;
}

void Waiter::updateBill(double price , int quantity) {
    currentBillAmount += price *quantity;
}
void Waiter::receive(std::string to, std::string message) {
    std::cout<<"Waiter "<<waiterNumber<<" message: "<< message <<std::endl;
}

void Waiter::send() {
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dis(0, 1);

    
    int random_integer = dis(gen);
    std::string message = "";
    std::string to = "";
    std::cout << "Waiter would you like to send the order to the Chef now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

     to=random_integer;
    if (to == "1") {
     to = "ChefHandler";
     message = "Here is my order for table: "+ waiterNumber;
    } else {
        return; 
    }

    mediator->notifications(to,message);
}

void Waiter::presentBill() {
    cout << " *** Waiter #" << waiterNumber << " is presenting the bill. ***" << endl;
    cout << "Your total bill amount is: R" << currentBillAmount << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. Pay now" << endl;
    cout << "2. Create a tab" << endl;
    cout << "3. Ask for more time" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:

            handlePayment();
            break;
        case 2:
            createTab();
            break;
        case 3:
            cout << "No problem. Take your time. Let us know when you're ready to pay." << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3." << endl;
            break;
    }

}

//use random numbers for options
void Waiter::handlePayment() {
    int customerRating;
    cout << "Processing payment... Thank you for joining us!" << endl;
    cout<<"Before you go, please rate your experience out of 5:"<<endl ;
    cin>>customerRating;
    if(customerRating<3)
    {
        cout<<"We are sincerely apologise for the inconvenience you've experienced. We're committed to improving and ensuring a better experience in the future."<<endl;
        cout<<"To help us improve , please let us know what your biggest issue was:"<<endl ;
        cout<<"1)"<<endl;
    }
    cout<<"We hope to see you soon ;D"<<endl;
}


void Waiter::createTab() {
    cout << "Creating a tab for the customer. You can settle the bill later." << endl;
    string customerName;
    int custContact, custID;
    cout<<"Please enter your full name and surname "<<endl;
    cin>>customerName;
    cout<<"Please enter your contact number"<<endl;
    cin>>custContact;
    cout<<"Please enter your ID number"<<endl;
    cin>>custID;
     saveBillAmountToTextFile(currentBillAmount, customerName,custContact, custID);

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

}


const int Waiter::getWaiterNumber(){
    return waiterNumber;
}
// void Waiter::setWaiterNumber(int waiternumber){
//     this->waiterNumber=waiternumber;

// }
std::string Waiter::getClassname(){
    return "Waiter";
}
