#include "EmptyTable.h"
#include "OccupiedTable.h"


/// @brief The state of the table when it is not occupied. Simulates preparing a table.
/// @tparam T 
/// @param table 
template <class T>
void EmptyTable<T>::handle(Table<T>& table)
{
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