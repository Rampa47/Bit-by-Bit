#include "AwaitingBill.h"
#include "ReadyToLeave.h"

/// @brief Handles the table waiting and receiving the bill from the waiter.
/// @tparam T 
/// @param table 
template <class T>
void AwaitingBill<T>::handle(Table<T>& table)
{
    std::cout << "[Table-" << table.getWaiterNumber() << "] is waiting for the bill]\n" << std::endl;
}

template <class T>
TableState<T>* AwaitingBill<T>::getNextState()
{
    return new ReadyToLeave();
    
}

template <class T>
std::string AwaitingBill<T>::toString()
{
    return "Awaiting Bill";
}