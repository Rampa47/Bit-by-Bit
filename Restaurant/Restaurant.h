#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Table.h"
#include "TableIterator.h"

template <class T>
class Restaurant
{
    public:
        Restaurant();       // Default constructor
        Table<T> * add();    // This function adds nodes to the list (that is, it creates the tables)
        void remove(T value);   // This function is meant to remove nodes from the list (It should be modified to remove customers)
        bool isEmptyList();     // This checks if the restaurant is empty
        void addCustomer(Customer& value); 
        Table<T> * getHead(); // To access the head when iterating through the list
        std::string printCustomers(); 
        void createList();  // Makes use of the add function to create the restaurant
        TableIterator<T>* createIterator();
        ~Restaurant();      // Destructor

    private:
        Table<T> * head;
};

#endif

