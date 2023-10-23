#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"

template <class T>
class Table
{
    public:
        Table();     // Default constructor
        Table(T value);      // Parameterised constructor (Was used in testing the list)
        Table<T> * getNext(); 
        Table<T> * getPrev();
        void setNext(Table<T> * node);
        void setPrev(Table<T> * node);
        std::string getValue(std::string value);    // Gets the name of a particular customer
        bool isFull();      // Checks if the table is full
        bool isEmpty();     // Checks if the table is empty
        std::vector<Customer*> getTable();  // Provides access to the particular table's vector (which contains the customers) 
        std::string print();    // Prints the names of the customers at a particular table
        void incrementNumCustomers();
        void addCust(Customer& value);

    private:
        Table * next;
        Table * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
};

#endif