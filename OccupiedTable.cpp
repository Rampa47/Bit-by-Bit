#include "OccupiedTable.h"
#include "RequestToOrder.h"


void OccupiedTable::handle(Table& table)
{
    std::cout << "Customers are seated...\n";
}


TableState* OccupiedTable::getNextState()
{
    return new RequestToOrder();
    
}


std::string OccupiedTable::toString()
{
    return "Occupied Table";
}