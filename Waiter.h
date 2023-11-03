#ifndef WAITER_H
#define WAITER_H
#include <string>
#include "ComplaintsHandler.h"
#include "Order.h"
#include "Table.h"
#include "ChefTask.h"
#include "FoodItem.h"
#include "Menu.h"
#include "Burger.h"
#include "Poulltry.h"
#include "Chips.h"
#include "BeefBurger.h"
#include "PoultryChef.h"
#include "BurgerChef.h"
#include "FryChef.h"
#include "HeadChef.h"
#include <vector>
#include <thread>
#include <iostream>
#include <fstream>
using namespace std ;


class Waiter :public ComplaintsHandler{
private:
    int waiterNumber;
    Order* order;
    Menu *menu ;
    int maxOrderAttempts ;
     double currentBillAmount;
     //Table *table;
public:
    Waiter(int wNum);
    void handleComplaint(string c, int degree);
    void takeOrder(Order *order);
    void receive(string to, string message);
    void send(string to, string message);
    void greetCustomer();
    void presentMenu();
    void updateBill(double price , int quantity);
    void presentBill();
    void createTab();
    void handlePayment();
    void saveBillAmountToTextFile(double billAmount ,string name , int contact,int ID);
    void retrieveBillAmountFromTextFile();

};

#endif
