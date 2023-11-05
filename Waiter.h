#ifndef WAITER_H
#define WAITER_H

#include <string>
#include "ComplaintsHandler.h"
#include "Order.h"
#include "Colleague.h"

class Waiter : public ComplaintsHandler, public Colleague {
private:
    int waiterNumber;
    Order* order;
    double currentBillAmount;
    ChefHandler* chef;

public:
    Waiter(int wNum, ChefHandler* chef);
    void handleComplaint(std::string c, int degree);
    void takeOrder(Order* order);
    void receive(std::string to, std::string message);
    void send() override; 
    std::string getClassname();
    void greetCustomer();
    void updateBill(double price, int quantity);
    void presentBill();
    void createTab();
    void handlePayment();
    void saveBillAmountToTextFile(double billAmount, std::string name, int contact, int ID);
    void retrieveBillAmountFromTextFile();
    const int getWaiterNumber();
    void addNext(ComplaintsHandler* c);
    ~Waiter();
};

#endif
