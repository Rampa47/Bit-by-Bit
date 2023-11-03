#include "RequestToOrder.h"
#include "ReceivedOrder.h"

template <class T>
void RequestToOrder<T>::handle(Table<T>& table)
{
   //have the waiter take each customers order ?
    //iteratate through each customer and receive an order (??)
    //pass that order to the waiter's takeOrder function??
    
   
    std::cout << ["Getting customer orders"] << std::endl;
    //table.getWaiter().takeOrder();
    
}

template <class T>
TableState<T>* RequestToOrder<T>::getNextState()
{
    return new ReceivedOrder();
    
}

template <class T>
std::string RequestToOrder<T>::toString()
{
    return "Request to Order";
}