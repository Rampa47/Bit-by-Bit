#include "CheckState.h"
#include "RequestToOrder.h"


void CheckState::handle(Table& table)
{
    table.getWaiter()->checkOnTable();
    ThreadSleep::threadSleep();
}


TableState* CheckState::getNextState()
{
    if (current<=0) return new RequestToOrder();
    else return new CheckState(--current);
    
}


std::string CheckState::toString()
{
    return "Check Table";
}

CheckState::CheckState(int c){
    current=c;
}