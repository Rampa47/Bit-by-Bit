#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"

template <class T>
class LinkedList
{
    public:
        LinkedList();       // Default constructor
        Node<T> * add();    // This function adds nodes to the list (that is, it creates the tables)
        void remove(T value);   // This function is meant to remove nodes from the list (It should be modified to remove customers)
        bool isEmptyList();     // This checks if the restaurant is empty
        void addCustomer(Customer& value); 
        Node<T> * getHead(); // To access the head when iterating through the list
        std::string printCustomers(); 
        void createList();  // Makes use of the add function to create the restaurant
        ~LinkedList();      // Destructor

    private:
        Node<T> * head;
};

#endif