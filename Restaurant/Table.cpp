#include "Table.h"

template <class T>
Table<T>::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
}

template <class T>
Table<T>::Table(T value)
{
    next = nullptr;
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
bool Table<T>::isFull()
{
    if(this->numCurrentCustomers == maxNumCustomers)
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
void Table<T>::addCust(Customer& value)
{
    if(isFull())
    {
        return;
    }
    else
    {
        customers.push_back(&value);
    }
}