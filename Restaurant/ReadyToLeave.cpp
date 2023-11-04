#include "ReadyToLeave.h"
#include "EmptyTable.h"

/// @brief Prints out the total amount paid by the table. Goodbye message sent to waiter.
/// @tparam T 
/// @param table 
template <class T>
void ReadyToLeave<T>::handle(Table<T>& table)
{
   //remove customers from table
   table.setState();
}

template <class T>
TableState<T>* ReadyToLeave<T>::getNextState()
{
    return new EmptyTable();
    
}

template <class T>
std::string ReadyToLeave<T>::toString()
{
    return "Ready to leave.";
}