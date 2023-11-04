
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


class Waiter :public ComplaintsHandler , public Colleague{
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
       /**
         * @brief Gets the name of the concrete Class.
        
         */
         std::string getClassname();
         void setWaiterNumber(int waiternumber);
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

