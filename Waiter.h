#ifndef WAITER_H
#define WAITER_H
#include <string>
#include "ComplaintsHandler.h"
#include "Order.h"
#include <vector>
#include <thread>
#include <iostream>
#include <fstream>
using namespace std ;


class Waiter :public ComplaintsHandler{
private:
    int waiterNumber;
    Order* order;
    int maxOrderAttempts ;
    double currentBillAmount;
public:
    Waiter(int wNum);
    void handleComplaint(string c, int degree);
    void takeOrder(Order* order);
    void receive(string to, string message);
    void send(string to, string message);
    void greetCustomer();
    void updateBill(double price , int quantity);
    void presentBill();
    void createTab();
    void handlePayment();
    void saveBillAmountToTextFile(double billAmount ,string name , int contact,int ID);
    void retrieveBillAmountFromTextFile();
    const int getWaiterNumber();
    ~Waiter();

};

#endif
