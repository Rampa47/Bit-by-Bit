#ifndef WAITER_H
#define WAITER_H
#include <string>
#include "ComplaintsHandler.h"
#include "Order.h"
//#include "Bill.h"
#include <vector>
#include <thread>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std ;


class Waiter :public ComplaintsHandler , public Colleague{
private:
    int waiterNumber;
    Order* order;
    //UNCOMMENT WHEN BILL CLASS IS AVAILABLE 
    //Bill *customerBill;
    ChefHandler * chef;
   // Table *table;

   
public:
    Waiter(int wNum, ChefHandler* chef);
    void handleComplaint(string c, int degree);
    void takeOrder(Order* order);
    /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
    void receive(std::string to,std::string message);
     /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void send();
       std::string getClassname();
         // void setWaiterNumber(int waiternumber);
    void greetCustomer();
   // void updateBill(double price , int quantity);
   // void presentBill();
   // void createTab();
   // void handlePayment();

   //NB function below must take a Bill object .it will have all this information
    void saveBillAmountToTextFile(double billAmount ,string name , int contact,int ID);
    void checkCustomer();//checks if customer is ready to order
    //void retrieveBillAmountFromTextFile();
    const int getWaiterNumber();
    void addNext(ComplaintsHandler* c);
    void generateBill();
    ~Waiter();

};

#endif
