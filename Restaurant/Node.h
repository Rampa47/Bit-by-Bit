#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Customer.h"

template <class T>
class Node
{
    public:
        Node();     // Default constructor
        Node(T value);      // Parameterised constructor (Was used in testing the list)
        Node<T> * getNext(); 
        Node<T> * getPrev();
        void setNext(Node<T> * node);
        void setPrev(Node<T> * node);
        std::string getValue(std::string value);    // Gets the name of a particular customer
        bool isFull();      // Checks if the node (or table) is full
        bool isEmpty();     // Checks if the node (or table) is empty
        std::vector<Customer*> getTable();  // Provides access to the particular table's vector (which contains the customers) 
        std::string print();    // Prints the names of the customers at a particular table
        void incrementNumCustomers();
        void addCust(Customer& value);  //

    private:
        Node * next;
        Node * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
};

#endif