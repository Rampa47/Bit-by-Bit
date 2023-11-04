#include "OccupiedTable.h"
#include "RequestToOrder.h"


void OccupiedTable::handle(Table& table)
{
    std::cout << "[Customers are seated]"
    //table.getWaiter().greet();
}


TableState* OccupiedTable::getNextState()
{
    return new RequestToOrder();
    
}


std::string OccupiedTable::toString()
{
    return "Occupied Table";
}