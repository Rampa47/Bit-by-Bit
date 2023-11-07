/**
 * @file Waiter.h
 */
#ifndef WAITER_H
#define WAITER_H

#include <string>
#include <iostream>
#include <fstream>
#include <random>
#include "ComplaintsHandler.h"
#include "Order.h"
#include "Colleague.h"

class Table;


/**
 * @class Waiter
 * @brief Represents a waiter responsible for handling orders and complaints at a restaurant.
 */
class Waiter : public ComplaintsHandler, public Colleague {
private:
    int waiterNumber; /**< Unique identifier for the waiter. */
    Order* order;  /**< Pointer to the current order being processed. */
    double currentBillAmount;  /**< Current bill amount for the table. */
    ChefHandler* chef; /**< Pointer to the ChefHandler for order processing. */
    Table*table; /**< Pointer to the table the waiter is serving. */


    public:
        Waiter(int wNum, ChefHandler* chef);
        void handleComplaint(std::string c, int degree);
        void takeOrder(Order* order);
          /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
        void receive(std::string to, std::string message);
         /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         */
        void send() override; 
        /**
         * @brief Returns the concrete Colleagues name.
         */
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
        void setTable(Table * t);
        void checkOnTable();
        ~Waiter();
       
        

};

#endif
