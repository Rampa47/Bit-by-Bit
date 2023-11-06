#include "TableIterator.h"

/**
 * @brief Constructor for the TableIterator class.
 *
 * Initializes the table iterator with the specified table. If the provided table is not null,
 * the iterator is set to the first table in the linked list.
 *
 * @param table A pointer to the table to be used as a starting point for iteration.
 */
TableIterator::TableIterator(Table* table)
{
    if(table == nullptr)
    {
        firstTable = currentTable = nullptr;
    }
    else
    {
        Table* tablePtr = table;

        while(tablePtr->getPrev()!=nullptr)
        {
            tablePtr = tablePtr->getPrev();
        }

        firstTable = tablePtr;

        currentTable = tablePtr;
    }
}

/**
 * @brief Returns the first table in the linked list.
 *
 * This function returns a pointer to the first table in the linked list.
 *
 * @return A pointer to the first table.
 */
Table* TableIterator::first()
{
    return firstTable;
}

/**
 * @brief Destructor for the TableIterator class.
 *
 * Cleans up any allocated resources, including the firstTable and currentTable pointers.
 */
TableIterator::~TableIterator()
{
    if(firstTable != nullptr)
    {
        delete firstTable;
    }

    firstTable = nullptr;

    if(currentTable != nullptr)
    {
        delete currentTable;
    }

    currentTable = nullptr;
}

/**
 * @brief Moves the iterator to the next table in the linked list.
 *
 * If there is a next table, the iterator is advanced to the next table.
 */
void TableIterator::next()
{
    if(hasNext())
    {
        currentTable = currentTable->getNext();
    }
}

/**
 * @brief Returns the current table being pointed to by the iterator.
 *
 * This function returns a pointer to the current table being pointed to by the iterator.
 *
 * @return A pointer to the current table.
 */
Table* TableIterator::current()
{
    return currentTable;
}

/**
 * @brief Checks if there is a next table in the linked list.
 *
 * This function checks whether there is a next table in the linked list to advance the iterator.
 *
 * @return `true` if there is a next table, `false` otherwise.
 */
bool TableIterator::hasNext()
{
    if(currentTable == nullptr)
    {
        return false;
    }

    return (currentTable->getNext() != nullptr);
}