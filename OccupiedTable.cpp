#include "OccupiedTable.h"
#include "CheckState.h"


void OccupiedTable::handle(Table& table)
{
    std::cout<<"Customers on table "<<table.getTableNumber()<<" browsing menu..."<<std::endl;
    ThreadSleep::threadSleep();
}


TableState* OccupiedTable::getNextState()
{
    int iterations = ThreadSleep::generateRandomNumber(0,3);
    return new CheckState(iterations);
    
}


std::string OccupiedTable::toString()
{
    return "Occupied Table";
}