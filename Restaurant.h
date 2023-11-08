
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Table.h"
#include "TableIterator.h"


class Restaurant
{
    public:
        /**
 * @brief Default constructor for the Restaurant class.
 */
Restaurant();

/**
 * @brief Add a table to the restaurant.
 *
 * @return A pointer to the newly added table.
 */
Table *add();

/**
 * @brief Add a waiting area table to the restaurant.
 *
 * @return A pointer to the newly added waiting area table.
 */
Table *addWaitingArea();

/**
 * @brief Remove a table from the restaurant.
 *
 * @param table A pointer to the table to be removed.
 */
void remove(Table *table);

/**
 * @brief Check if the restaurant is empty.
 *
 * @return true if the restaurant is empty, false otherwise.
 */
bool isEmptyList();

/**
 * @brief Check if the restaurant's tables are fully occupied.
 *
 * @return true if all tables are occupied, allowing extra customers in the waiting area.
 */
bool isFull();

/**
 * @brief Add a group of customers to a table.
 *
 * @param vect A vector containing Customer objects to add to the table.
 * @return A pointer to the table where customers are added.
 */
Table* addCustomer(std::vector<Customer*> vect);

/**
 * @brief Get the head of the restaurant's table list.
 *
 * @return A pointer to the head table.
 */
Table *getHead();

/**
 * @brief Print the names of customers in the restaurant.
 *
 * @return A string containing the names of customers in the restaurant.
 */
std::string printCustomers();

/**
 * @brief Create the restaurant by adding tables.
 */
void createList();

/**
 * @brief Create a table iterator for traversing the restaurant's tables.
 *
 * @return A TableIterator object for table traversal.
 */
TableIterator* createIterator();

/**
 * @brief Destructor for the Restaurant class.
 */
~Restaurant();

/**
 * @brief Get the table at a specified index in the restaurant's table list.
 *
 * @param index The index of the table to retrieve.
 * @return A pointer to the table at the specified index.
 */
Table *getTableAt(int index);

/**
 * @brief Get the total number of tables in the restaurant.
 *
 * @return The total number of tables.
 */
int getNumTables();


    private:
        Table * head;
        int maxNumWaitingAreas;
        static int currentNumWaitingAreas;
};

#endif




