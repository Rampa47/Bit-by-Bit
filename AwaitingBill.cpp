#include "AwaitingBill.h"
#include "PaidBill.h"

template <class T>
void AwaitingBill<T>::handle(Table<T>& table)
{
    std::cout << "[Table-" << table.getWaiterNumber() << "] is waiting for the bill]\n" << std::endl;
    
    //instruct waiter to send the bill to the table
    //table.setBill(table.getWaiter().getBill());
}

template <class T>
TableState<T>* AwaitingBill<T>::getNextState()
{
    return new PaidBill();
    
}

template <class T>
std::string AwaitingBill<T>::toString()
{
    return "Awaiting Bill";
}