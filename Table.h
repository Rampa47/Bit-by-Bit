

#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"
#include "Colleague.h"
#include "Waiter.h"
#include "ChefHandler.h"
#include "Order.h"
#include "TableState.h"
#include "Complaint.h"
#include "CompositeBillPayer.h"
#include "DelegatingCompositebill.h"
#include "TimeComplaint.h"
#include "FoodComplaint.h"
#include "ServiceComplaint.h"

class TableState;

class Table: public Colleague
{
    public:
       /**
 * @brief Default constructor for the Table class.
 */
Table();

/**
 * @brief Parameterized constructor for the Table class.
 *
 * @param isWaitingArea Specifies if the table is in the waiting area.
 */
Table(bool isWaitingArea);

/**
 * @brief Get the next table in the linked list.
 *
 * @return A pointer to the next table.
 */
Table *getNext();

/**
 * @brief Get the previous table in the linked list.
 *
 * @return A pointer to the previous table.
 */
Table *getPrev();

/**
 * @brief Set the next table in the linked list.
 *
 * @param node A pointer to the next table.
 */
void setNext(Table *node);

/**
 * @brief Set the previous table in the linked list.
 *
 * @param node A pointer to the previous table.
 */
void setPrev(Table *node);

/**
 * @brief Get the table type (e.g., waiting area).
 *
 * @return true if the table is in the waiting area, false otherwise.
 */
bool getTableType();

/**
 * @brief Get the name of a particular customer at the table.
 *
 * @param value The value to retrieve (e.g., customer name).
 * @return The name of the specified customer.
 */
std::string getValue(std::string value);

/**
 * @brief Get the maximum number of customers the table can accommodate.
 *
 * @param value The value to retrieve (e.g., maximum number of customers).
 * @return The maximum number of customers the table can accommodate.
 */
int getMaxNumCustomers(bool value);

/**
 * @brief Get the current number of customers at the table.
 *
 * @return The current number of customers at the table.
 */
int getNumCurrentCustomers();

/**
 * @brief Check if the table is full.
 *
 * @param value The value to check (e.g., is full).
 * @return true if the table is full, false otherwise.
 */
bool isFull(bool value);

/**
 * @brief Check if the table is empty.
 *
 * @return true if the table is empty, false otherwise.
 */
bool isEmpty();

/**
 * @brief Check if the table is occupied.
 *
 * @return true if the table is occupied, false otherwise.
 */
bool isOccupied();

/**
 * @brief Remove customers from the table.
 */
void removeCustomers();

/**
 * @brief Get the vector containing customers at the table.
 *
 * @return A vector of Customer objects at the table.
 */
std::vector<Customer*> getTable();

/**
 * @brief Print the names of customers at the table.
 *
 * @return A string containing the names of customers at the table.
 */
std::string print();

/**
 * @brief Increment the number of customers at the table.
 */
void incrementNumCustomers();

/**
 * @brief Signal that customers are leaving the table.
 */
void leave();

/**
 * @brief Signal that customers are ordering.
 */
void order();

/**
 * @brief Signal that customers are paying the bill.
 */
void payBill();

/**
 * @brief Receive a message from the Mediator.
 *
 * @param to Specifies the recipient of the message.
 * @param message The message content.
 */
void receive(std::string to, std::string message);

/**
 * @brief Send a message to a specific Colleague through the Mediator.
 */
void send();

/**
 * @brief Get the waiter number associated with the table.
 *
 * @return The waiter number.
 */
int getWaiterNumber();

/**
 * @brief Set the waiter associated with the table.
 *
 * @param waiter A pointer to the Waiter object.
 */
void setWaiter(Waiter* waiter);

/**
 * @brief Get the class name of the Table.
 *
 * @return The class name.
 */
std::string getClassname();

/**
 * @brief Call the waiter for assistance.
 */
void callWaiter();

/**
 * @brief Set the state of the table.
 */
void setState();

/**
 * @brief Get the state of the table.
 *
 * @return A pointer to the current table state.
 */
TableState* getState();

/**
 * @brief Handle the state of the table.
 */
void handleTableState();

/**
 * @brief Get the waiter associated with the table.
 *
 * @return A pointer to the Waiter object.
 */
Waiter* getWaiter();

/**
 * @brief Generate a bill for the table.
 *
 * @return A pointer to a BillComponent object representing the bill.
 */
BillComponent* generateBill();

/**
 * @brief Get the table number.
 *
 * @return The table number.
 */
int getTableNumber();

/**
 * @brief Destructor for the Table class.
 */
~Table();

    private:
        int tableNumber;
        Table * next;
        Table * prev;
        std::vector<Customer*> customers;
        TableState* tableState;
        Complaint* c=NULL;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
        int maxExtendedNumCustomers = 10;
        bool isWaitingArea;
        Waiter* waiter=nullptr;
        static int waiterNumberToTable;//a unique waiter number will be generated for each table that creates ab instance of the waiter
};
#endif

