#include "PaidBill.h"
#include "EmptyTable.h"


void PaidBill::handle(Table& table)
{
   //total paid, tip, goodbye message
   std::cout << "Total paid by table-" << table.getWaiterNumber() <<": R" << std::endl ; //table.getWaiter().getTotal();
}


TableState* PaidBill::getNextState()
{
    return new EmptyTable();
    
}


std::string PaidBill::toString()
{
    return "Paid Bill";
}