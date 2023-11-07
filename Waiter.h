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
/**
 * Greets the customer upon their arrival to the restaurant.
 */
 void greetCustomer();

/**
 * @brief Updates the current bill with the cost of the ordered items.
 * 
 * This function increases the total bill amount based on the price and quantity
 * of the items ordered by the customer.
 * 
 * @param price The price of the item.
 * @param quantity The quantity of the item ordered.
 */
void updateBill(double price, int quantity);


/**
 * @brief Presents the bill to the customer for payment or tab creation.
 * 
 * This function displays the total bill amount to the customer and provides options
 * to either make a payment, create a tab, or request more time.
 */
void presentBill();

/**
 * @brief Creates a tab for the customer's bill.
 * 
 * This function generates a tab for the customer, enabling them to settle the bill
 * at a later time by entering their personal details (name, contact, and ID).
 */
 void createTab();

/**
 * @brief Handles the payment process.
 * 
 * This function processes the payment from the customer and finalizes the transaction.
 */
void handlePayment();


/**
 * @brief Saves the bill amount and customer details to a text file.
 * 
 * This function stores the bill amount, customer name, contact information, and ID in a text file
 * for record-keeping or further processing.
 * 
 * @param billAmount The total bill amount.
 * @param name The customer's name.
 * @param contact The customer's contact information.
 * @param ID The customer's identification number.
 */
void saveBillAmountToTextFile(double billAmount, std::string name, int contact, int ID);
        
/**
 * @brief Retrieves the bill amount and customer details from a text file.
 * 
 * This function reads the stored customer information and bill amount from a text file.
 * It retrieves the details to provide appropriate service to returning customers.
 */
void retrieveBillAmountFromTextFile();

/**
 * @brief Retrieves the waiter's unique identification number.
 * 
 * This function returns the unique identifier of the waiter.
 * 
 * @return The waiter's number.
 */
 const int getWaiterNumber();

/**
 * @brief Sets the next handler for managing complaints.
 * 
 * This function sets the next handler in the chain of responsibility for complaint management.
 * 
 * @param c Pointer to the next ComplaintsHandler.
 */
void addNext(ComplaintsHandler* c);

/**
 * @brief Sets the table associated with the waiter.
 * 
 * This function assigns the table the waiter is responsible for serving.
 * 
 * @param t Pointer to the Table object.
 */
 void setTable(Table * t);

/**
 * @brief Checks on the table to monitor customer status.
 * 
 * This function checks on the assigned table to monitor the status and ensure
 * the customers are attended to appropriately.
 */
 void checkOnTable();

    /**
     * @brief Destructor for the Waiter class.
     */
    
~Waiter();
       
        

};

#endif
