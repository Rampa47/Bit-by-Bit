#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"
#include <random>
#include "TimeComplaint.h"
#include "FoodComplaint.h"
#include "ServiceComplaint.h"

using namespace std;
template <class T>
class Table
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
        void addCust(Customer * value);
        void IsEverythingOkay(ComplaintsHandler* CH);
        int getRandomZeroOrOne();
        int generateComplaint();
        int generateDegree();

    private:
        Table * next;
        Table * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
        int maxExtendedNumCustomers = 10;
        bool isWaitingArea;
        Complaint* c=NULL;
};

#endif