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
     /**
     * @brief Constructor for the Waiter class.
     * @param wNum Waiter number.
     * @param chef Pointer to the ChefHandler.
     */
     Waiter(int wNum, ChefHandler* chef);

    /**
     * @brief Handles various complaints reported by customers.
     * @param c The type of complaint.
     * @param degree The severity level of the complaint.
     */
    void handleComplaint(std::string c, int degree);

/**
 * @brief Takes the customer's order and processes it.
 * 
 * This function initiates the order-taking process for the customer. 
 * It interacts with the customer to receive their order and communicates
 * with the kitchen to process the order items. It sets up an Order object
 * to manage the items requested by the customer and updates the bill amount
 * accordingly.
 * 
 * @param order Pointer to the Order object containing the customer's request.
 */
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

 /**
     * @brief Destructor for the Waiter class.
     */
    
        ~Waiter();
       
        

};

#endif
