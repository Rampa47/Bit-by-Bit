#include "Table.h"

template <class T>
Table<T>::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
    isWaitingArea = false;
}

template <class T>
Table<T>::Table(bool isWaitingArea)
{
    this->isWaitingArea = isWaitingArea;
    next = nullptr;
    numCurrentCustomers = 0;
}

template <class T>
Table<T> * Table<T>::getNext()
{
    if(next == nullptr)
    {
        return nullptr;
    }
    else
    {
        return next;
    }
}

template <class T>
Table<T> * Table<T>::getPrev()
{
    if(prev == nullptr)
    {
        return nullptr;
    }
    else
    {
        return prev;
    }
}

template <class T>
void Table<T>::setNext(Table<T> * node)
{
    this->next = node;
}

template <class T>
void Table<T>::setPrev(Table<T> * node)
{
    if(node == nullptr)
    {
        return;
    }
    else
    {
        this->prev = node;
    }
}

template <class T>
std::string Table<T>::getValue(std::string value)
{
    std::vector<Customer>::iterator it;

    for(size_t i = 0; i < customers.size(); i++)
    {
        if(customers[i]->getName() == value)
        {
            return customers[i]->getName();
        }
    }

    return "";
}

template <class T>
int Table<T>::getMaxNumCustomers(bool value)
{
    if(value)
    {
        return maxExtendedNumCustomers;
    }
    else
    {
        return maxNumCustomers;
    }
}

template <class T>
int Table<T>::getNumCurrentCustomers()
{
    return numCurrentCustomers;
}

template <class T>
bool Table<T>::isFull(bool value)
{
    if(value)
    {
        if(this->numCurrentCustomers >= getMaxNumCustomers(value))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(this->numCurrentCustomers >= maxNumCustomers)
        {
            // std::cout << "The table is fully occupied." << std::endl;
            // std::cout << "Please find alternative seating for the customers" << std::endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

template <class T>
bool Table<T>::isEmpty()
{
    if(this->numCurrentCustomers == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool Table<T>::isOccupied()
{
    if(this->numCurrentCustomers > 0 && this->numCurrentCustomers <= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
std::vector<Customer*> Table<T>::getTable()
{
    return customers;
}

template <class T>
std::string Table<T>::print()
{
    std::string people;
    std::vector<Customer*>::iterator it;

    for(size_t i = 0; i < customers.size(); i++)
    {
        people += customers[i]->getName() + "\n";
    }

    return people;
}

template <class T>
void Table<T>::incrementNumCustomers()
{
    numCurrentCustomers++;
}

template <class T>
void Table<T>::addCust(Customer * value)
{
    customers.push_back(value);
}

template <class T>
bool Table<T>::getTableType()
{
    return isWaitingArea;
}
template <class T>
void Table<T>::receive(std::string to,std::string message){
    std::cout<<" Table about to be serviced. Message: " << message <<std::endl;
 }
 template <class T>
  void  Table<T>::send(){
    std::string message = "";
    std::string to = "";
    std::cout << "Customer would you like to order now? " << std::endl;
    std::cout << "1.Yes" << std::endl;
    std::cout << "2.No" << std::endl;

    std::cin >> to;
    if (to == "1") {
     to = "Waiter";
     message = "Please may we order";
    } else {
        return; 
    }

    mediator->notifications(to, message, this);
  }
 template <class T>
 int Table<T>::getWaiterNumber(){
    return waiter->waiterNumber;
 }
 template <class T>
std::string Table<T>::getClassname(){
    return "Table";
}

template <class T>
void Table<T>::removeCustomer()
{
    this->customers.pop_back();
}
template <class T>
void Table<T>::setWaiter(Waiter* waiter){
    this->waiter=waiter;
    tableWaiterNumber = waiterNumberToTable++;
    waiter->setWaiterNumber(tableWaiterNumber);
}

