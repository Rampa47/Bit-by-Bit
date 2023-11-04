#include "OccupiedTable.h"
#include "RequestToOrder.h"

template <class T>
void OccupiedTable<T>::handle(Table<T>& table)
{
    std::cout << "[Customers are seated]"
    //table.getWaiter().greet();
}

template <class T>
TableState<T>* OccupiedTable<T>::getNextState()
{
    return new RequestToOrder();
    
}

template <class T>
std::string OccupiedTable<T>::toString()
{
    return "Occupied Table";
}