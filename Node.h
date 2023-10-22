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
        Node();
        Node(T value);
        Node<T> * getNext();
        Node<T> * getPrev();
        void setNext(Node<T> * node);
        void setPrev(Node<T> * node);
        std::string getValue(std::string value);
        bool isFull();
        bool isEmpty();
        std::vector<Customer*> getTable();
        std::string print();
        void incrementNumCustomers();
        void addCust(Customer& value);

    private:
        Node * next;
        Node * prev;
        std::vector<Customer*> customers;
        int numCurrentCustomers = 0;
        int maxNumCustomers = 5;
};

#endif