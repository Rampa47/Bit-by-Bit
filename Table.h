
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
        Table();     // Default constructor
        Table(bool isWaitingArea);      // Parameterised constructor (Was used in testing the list)
        Table * getNext(); 
        Table * getPrev();
        void setNext(Table * node);
        void setPrev(Table * node);
        // void setIsWaitingArea(bool isWaitingArea);
        bool getTableType();
        std::string getValue(std::string value);    // Gets the name of a particular customer
        int getMaxNumCustomers(bool value);
        int getNumCurrentCustomers();
        bool isFull(bool value);      // Checks if the table is full
        bool isEmpty();     // Checks if the table is empty
        bool isOccupied();  // Checks if the table is occupied
        void removeCustomers();
        std::vector<Customer*> getTable();  // Provides access to the particular table's vector (which contains the customers) 
       std::string print();    // Prints the names of the customers at a particular table
        void incrementNumCustomers();
       void leave();
        void order();
        void payBill();
       
        void addCust(Customer * value);
   /**
         * @brief Receives message from Mediator .
         * @param to Specifies to who the message is for.
         * @param message The actual message that will be received by the receiver.
         */
       void receive(std::string to,std::string message);
         /**
         * @brief Will allow Colleague to send a message to a specific Colleague through the Mediator.
         *
         *
         */
       void send();
         /**
         * @brief Returns the Waiter number associated with the Table.
         *
         * 
         * @return  waiter number is returned.
         */
       int getWaiterNumber();
       void setWaiter(Waiter* waiter);
       std::string getClassname();
      void callWaiter();
      void setState();
      TableState* getState();
      void handleTableState();
      Waiter* getWaiter();
      void IsEverythingOkay(ComplaintsHandler* CH);
      BillComponent* generateBill();
      string message="";
      static int currTableNo;
      int getTableNumber();
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
