#include "ReadyToLeave.h"
#include "EmptyTable.h"



/// @brief Removes the customers from the table and sets the table's state to Empty.
/// @param table 
void ReadyToLeave::handle(Table& table)
{
    std::cout << "Table "<<to_string(table.getTableNumber())<<" is leaving restaurant..." << std::endl;
	int rating = ThreadSleep::generateRandomNumber(1,5);
    cout << "[Table " <<to_string(table.getTableNumber())<<" Rating: "<<to_string(rating)<<"]"<<endl;
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