#include "TableIterator.h"

TableIterator::TableIterator(Table* table)
{
    if(table == nullptr)
    {
        firstTable = currentTable = nullptr;
    }

    //Find first table in linked list

    Table* tablePtr = table;

    while(tablePtr->getPrev()!=nullptr)
    {
        tablePtr = tablePtr->getPrev();
    }

    firstTable = tablePtr;

    currentTable = tablePtr;
}

Table* TableIterator::first()
{
    return firstTable;
}

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

void TableIterator::next()
{
    if(hasNext())
    {
        currentTable = currentTable->getNext();
    }
}

Table* TableIterator::current()
{
    return currentTable;
}

bool TableIterator::hasNext()
{
    if(currentTable == nullptr)
    {
        return false;
    }

    return (currentTable->getNext() != nullptr);
}