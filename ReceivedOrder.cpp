#include "ReceivedOrder.h"
#include "AwaitingBill.h"


void ReceivedOrder::handle(Table& table)
{
    // table.giveOrder(table.getWaiter().giveOrder());
    std::cout << "Table "<<to_string(table.getTableNumber())<<" has received their order..." << std::endl ;
    std::cout <<"Table "<<to_string(table.getTableNumber())<<" is dining..." << std::endl ; 
    ThreadSleep::threadSleep();
}


TableState* ReceivedOrder::getNextState()
{
    return new AwaitingBill();
    
}


std::string ReceivedOrder::toString()
{
    return "Received Order";
}