#include "TableIterator.h"

template <class T>
TableIterator<T>::TableIterator(Table<T>* table)
{
    if(table==nullptr)
    {
        firstTable = currentTable =  nullptr;
    }

    //Find first table in linked list

    Table<T>* tablePtr = table;
    while(tablePtr->getPrev()!=nullptr)
    {
        tablePtr = tablePtr->getPrev();
    }

    firstTable = tablePtr;
    currentTable = tablePtr;
}

template <class T>
Table<T>* TableIterator<T>::first()
{
    return firstTable;
}

template <class T>
void TableIterator<T>::next()
{
    if(hasNext())
    {
        currentTable = currentTable->getNext();
    }
}

template <class T>
Table<T>* TableIterator<T>::current()
{
    return currentTable;
}

template <class T>
bool TableIterator<T>::hasNext()
{
    if(currentTable==nullptr)
    {
        return false;
    }

    return (currentTable->getNext()!=nullptr);
}


