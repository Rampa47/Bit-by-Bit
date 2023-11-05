#include "ReadyToLeave.h"
#include "EmptyTable.h"


/// @brief Removes the customers from the table and sets the table's state to Empty.
/// @param table 
void ReadyToLeave::handle(Table& table)
{
   table.removeCustomers();
   table.setState();
}


TableState* ReadyToLeave::getNextState()
{
    return new EmptyTable();
    
}


std::string ReadyToLeave::toString()
{
    return "Ready to leave.";
}