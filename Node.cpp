#include "Node.h"

template <class T>
Node<T>::Node()
{
    next = nullptr;
    numCurrentCustomers = 0;
}

template <class T>
Node<T>::Node(T value)
{
    next = nullptr;
}

template <class T>
Node<T> * Node<T>::getNext()
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
Node<T> * Node<T>::getPrev()
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
void Node<T>::setNext(Node<T> * node)
{
    this->next = node;
}

template <class T>
void Node<T>::setPrev(Node<T> * node)
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
std::string Node<T>::getValue(std::string value)
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
bool Node<T>::isFull()
{
    if(this->numCurrentCustomers == maxNumCustomers)
    {
        std::cout << "The table is fully occupied." << std::endl;
        std::cout << "Please find alternative seating for the customers" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool Node<T>::isEmpty()
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
std::vector<Customer*> Node<T>::getTable()
{
    return customers;
}

template <class T>
std::string Node<T>::print()
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
void Node<T>::incrementNumCustomers()
{
    numCurrentCustomers++;
}

template <class T>
void Node<T>::addCust(Customer& value)
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