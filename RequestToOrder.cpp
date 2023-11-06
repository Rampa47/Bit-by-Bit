#include "RequestToOrder.h"
#include "ReceivedOrder.h"


void RequestToOrder::handle(Table& table)
{
    //have the waiter take each customers order 
    //iteratate through each customer and receive an order (??)
    //pass that order to the waiter's takeOrder function??
    std::cout << "Table "<<to_string(table.getTableNumber())<<" ready to order..." << std::endl;
    table.message= "Table is ready to order.";
    table.send();
    ThreadSleep::threadSleep();
    table.callWaiter();
}


TableState* RequestToOrder::getNextState()
{
    return new ReceivedOrder();
    
}


std::string RequestToOrder::toString()
{
    return "Request to Order";
}