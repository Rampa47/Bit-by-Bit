#include "ReceivedOrder.h"
#include "AwaitingBill.h"


void ReceivedOrder::handle(Table& table)
{
    // table.giveOrder(table.getWaiter().giveOrder());
    std::cout << "[The table has received their order]" << std::endl ; 
}


TableState* ReceivedOrder::getNextState()
{
    return new AwaitingBill();
    
}


std::string ReceivedOrder::toString()
{
    return "Received Order";
}