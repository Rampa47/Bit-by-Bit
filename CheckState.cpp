#include "CheckState.h"
#include "RequestToOrder.h"


void CheckState::handle(Table& table)
{
    table.getWaiter()->checkOnTable();
    cout<<"Table still browsing menu and is not ready to order..."<<endl;
    ThreadSleep::threadSleep();
}


TableState* CheckState::getNextState()
{
    if (current--<=0) return new RequestToOrder();
    else return new CheckState(current);
    
}


std::string CheckState::toString()
{
    return "Check Table";
}

CheckState::CheckState(int c){
    current=c;
}