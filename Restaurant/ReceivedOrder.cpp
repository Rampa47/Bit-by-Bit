#include "ReceivedOrder.h"
#include "AwaitingBill.h"


template <class T>
void ReceivedOrder<T>::handle(Table<T>& table)
{
    // table.giveOrder(table.getWaiter().giveOrder());
    std::cout << "[The table has received their order]" << std::endl   
}

template <class T>
TableState<T>* ReceivedOrder<T>::getNextState()
{
    return new AwaitingBill();
    
}

template <class T>
std::string ReceivedOrder<T>::toString()
{
    return "Received Order";
}