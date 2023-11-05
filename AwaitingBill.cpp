#include "AwaitingBill.h"
#include "PaidBill.h"

void AwaitingBill::handle(Table& table)
{
    std::cout << "[Table-" << table.getWaiterNumber() << "] is waiting for the bill]\n" << std::endl;
    
    //instruct waiter to send the bill to the table
    //table.setBill(table.getWaiter().getBill());
}

TableState* AwaitingBill::getNextState()
{
    return new PaidBill();
    
}


std::string AwaitingBill::toString()
{
    return "Awaiting Bill";
}