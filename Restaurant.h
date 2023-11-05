
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Table.h"
#include "TableIterator.h"


class Restaurant
{
    public:
        Restaurant();        // Default constructor
       Table * add();    // This function adds nodes to the list (that is, it creates the tables)
        Table * addWaitingArea();
        void remove(Table * table);
        bool isEmptyList();     // This checks if the restaurant is empty
        bool isFull();          // This checks if the restaurant's table are occupied. Extra customers can be seated in the waiting area
         void addCustomer(std::vector<Customer*> vect); 
       Table * getHead(); // To access the head when iterating through the list
      std::string printCustomers(); 
       void createList();  // Makes use of the add function to create the restaurant
        TableIterator* createIterator();
        ~Restaurant();      // Destructor
         Table * getTableAt(int index);
        int getNumTables();

    private:
        Table * head;
        int maxNumWaitingAreas;
        static int currentNumWaitingAreas;
};

#endif




