#include "OccupiedTable.h"
#include "RequestToOrder.h"


/// @brief Simulates seating the customers and the waiter greeting and presenting the menu to the customers.
/// @tparam T 
/// @param table 
template <class T>
void OccupiedTable<T>::handle(Table<T>& table)
{
    std::cout << "[Customers are seated]" << std::endl;
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