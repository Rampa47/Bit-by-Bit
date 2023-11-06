#include "EmptyTable.h"
#include "OccupiedTable.h"


void EmptyTable::handle(Table& table)
{
    //simulate cleaning or setting up the table
    std::cout << "Table "<<to_string(table.getTableNumber())<<" has become available.\n";
}


TableState* EmptyTable::getNextState()
{
    return new OccupiedTable();
    
}


std::string EmptyTable::toString()
{
    return "Empty Table";
}