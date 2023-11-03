#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"
#include "Colleague.h"
#include "Waiter.h"
#include "TableState.h"

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
        int getMaxNumCustomers(bool value);
        int getNumCurrentCustomers();
        bool isFull(bool value);      // Checks if the table is full
        bool isEmpty();     // Checks if the table is empty
        bool isOccupied();  // Checks if the table is occupied
        void removeCustomer();
        std::vector<Customer*> getTable();  // Provides access to the particular table's vector (which contains the customers) 
        std::string print();    // Prints the names of the customers at a particular table
        void incrementNumCustomers();
        void leave();
        void order();
        void payBill();
        // void setMood()
        void receive(std::string to, std::string message);
        void send(std::string to, std::string message);
       
       
        void addCust(Customer * value);
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
       void send();
         /**
         * @brief Returns the Waiter number associated with the Table.
         *
         * 
         * @return  waiter number is returned.
         */
       int getWaiterNumber();
       void setWaiter(Waiter<T>* waiter);
       Waiter<T>* getWaiter();
       std::string getClassname();
       void setState();


      //  void giveOrder(Order* tableOrder);
    private:
        Table * next;
        Table * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
        int maxExtendedNumCustomers = 10;
        bool isWaitingArea;
        Waiter* waiter=nullptr;
        //Order* tablesOrder = nullptr;
        static int waiterNumberToTable;//a unique waiter number will be generated for each table that creates ab instance of the waiter
        TableState* tableState;
};

#endif