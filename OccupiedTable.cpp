#include "OccupiedTable.h"
#include "CheckState.h"


void OccupiedTable::handle(Table& table)
{
    cout<<"Customers on table "<<to_string(table.getTableNumber())<<" browsing menu"<<endl;
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