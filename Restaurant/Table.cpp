#include "Table.h"
#include "EmptyTable.h"

template <class T>
int Table<T>::waiterNumberToTable = 0;
template <class T>
Table<T>::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
    isWaitingArea = false;
    className="Table";
    waiter= nullptr;
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
    if(this->numCurrentCustomers > 0 && this->numCurrentCustomers < 5)
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
void Table<T>::receive(std::string to,std::string message,Colleague* me){
    std::cout<<" Table about to be serviced. Message: " << message <<std::endl;
 }
 template <class T>
  void  Table<T>::send(){
    std::string message="";
      std::string to="";
    std::cout<<"Customer who would you like to Notify?"<<std::endl;
    std::cin>>to;
    std::cout<<"Customer what is your message to the receiver?"<<std::endl;
    std::cin>>message;

   mediator->notifications(to,message,this);
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
void Table<T>::setWaiter(Waiter<T>* waiter){
    this->waiter=waiter;
}

template <class T>
Waiter<T>* Table<T>::getWaiter(){
    return this.waiter;
}

template <class T>
void Table<T>::leave(){
    setState();
    tableState->handle();
}


/// @brief  
/// @tparam T
template <class T>
void Table<T>::order(){
    setState();
    tableState->handle();
}

template <class T>
void Table<T>::payBill(){
    setState();

    // if(tableState->toString()=="")
    tableState
}
// void setMood()

template <class T>
void Table<T>::receive(std::string to, std::string message){

}

template <class T>
void Table<T>::send(std::string to, std::string message){

}

template <class T>
void Table<T>::setState(){
    tableState = tableState->getNextState();
}