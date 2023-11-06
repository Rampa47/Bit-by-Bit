#include "OccupiedTable.h"
#include "CheckState.h"


void OccupiedTable::handle(Table& table)
{
    
    ThreadSleep::threadSleep();
}


TableState* OccupiedTable::getNextState()
{
    int iterations = ThreadSleep::generateRandomNumber(1,4);
    return new CheckState(iterations);
    
}


std::string OccupiedTable::toString()
{
    return "Occupied Table";
}