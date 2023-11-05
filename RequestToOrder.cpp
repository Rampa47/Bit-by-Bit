#include "RequestToOrder.h"
#include "ReceivedOrder.h"


void RequestToOrder::handle(Table& table)
{
    //have the waiter take each customers order 
    //iteratate through each customer and receive an order (??)
    //pass that order to the waiter's takeOrder function??
    table.send();
    
}


TableState* RequestToOrder::getNextState()
{
    return new ReceivedOrder();
    
}


std::string RequestToOrder::toString()
{
    return "Request to Order";
}