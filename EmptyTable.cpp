#include "EmptyTable.h"
#include "OccupiedTable.h"

template <class T>
void EmptyTable<T>::handle(Table<T>& table)
{
    //simulate cleaning or setting up the table
    std::cout << "The table has become available.\n";
}

template <class T>
TableState<T>* EmptyTable<T>::getNextState()
{
    return new OccupiedTable();
    
}

template <class T>
std::string EmptyTable<T>::toString()
{
    return "Empty Table";
}