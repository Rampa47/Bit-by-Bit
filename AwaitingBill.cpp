#include "AwaitingBill.h"
#include "ReadyToLeave.h"

void AwaitingBill::handle(Table& table)
{
    std::cout << "Table-" << table.getWaiterNumber() << " is waiting for the bill..." << std::endl;
    
    //instruct waiter to send the bill to the table
    //table.setBill(table.getWaiter().getBill());
}

TableState* AwaitingBill::getNextState()
{
    return new ReadyToLeave();
    
}


std::string AwaitingBill::toString()
{
    return "Awaiting Bill";
}