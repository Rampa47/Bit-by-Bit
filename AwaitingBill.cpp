#include "AwaitingBill.h"
#include "ReadyToLeave.h"

void AwaitingBill::handle(Table& table)
{
    std::cout << "Table "<<to_string(table.getTableNumber())<<" is waiting for the bill..." << std::endl;
    table.message= "Table is ready for the bill.";
    table.send();
    ThreadSleep::threadSleep();
    BillComponent* bill= table.generateBill();
    std::cout<<"Table "<<to_string(table.getTableNumber())<<" Receipt: "<<endl;
    std::cout<<bill->getBillReceipt();
    ThreadSleep::threadSleep();
    if (bill->isTab()){
        std::cout << "  [Table "<<to_string(table.getTableNumber())<<" has opened a tab...]" << std::endl;
    }
    else{
        std::cout << "  [Table "<<to_string(table.getTableNumber())<<" has payed the bill...]" << std::endl;
    }
    delete bill;
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