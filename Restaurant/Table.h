#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"
#include "Colleague.h"
#include "Waiter.h"

template <class T>
class Table: public Colleague
{
    public:
        Table();     // Default constructor
        Table(bool isWaitingArea);      // Parameterised constructor (Was used in testing the list)
        Table<T> * getNext(); 
        Table<T> * getPrev();
        void setNext(Table<T> * node);
        void setPrev(Table<T> * node);
        void setIsWaitingArea(bool isWaitingArea);
        bool getTableType();
        std::string getValue(std::string value);    // Gets the name of a particular customer
        int getMaxNumCustomers();
        int getNumCurrentCustomers();
        bool isFull();      // Checks if the table is full
        bool isEmpty();     // Checks if the table is empty
        bool isOccupied();  // Checks if the table is occupied
        std::vector<Customer*> getTable();  // Provides access to the particular table's vector (which contains the customers) 
        std::string print();    // Prints the names of the customers at a particular table
        void incrementNumCustomers();
        void addCust(Customer& value);
           /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void receive(std::string to,std::string message,Colleague* me);
        /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         *
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void send(std::string to,std::string message);
       int getWaiterNumber();
       
    private:
        Table * next;
        Table * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
        bool isWaitingArea;
        Waiter* waiter=nullptr;
        static int waiterNumberToTable=0;
};

#endif