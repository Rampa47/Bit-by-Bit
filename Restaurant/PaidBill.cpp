#include "PaidBill.h"
#include "EmptyTable.h"

template <class T>
void PaidBill<T>::handle(Table<T>& table)
{
   //total paid, tip, goodbye message
   std::cout << "Total paid by table-" << table.getWaiterNumber() <<": R" <<  ; //table.getWaiter().getTotal();
}

template <class T>
TableState<T>* PaidBill<T>::getNextState()
{
    return new EmptyTable();
    
}

template <class T>
std::string PaidBill<T>::toString()
{
    return "Paid Bill";
}