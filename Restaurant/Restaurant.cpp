#include "Restaurant.h"

template <class T>
Restaurant<T>::Restaurant()
{
    head = nullptr;
}

template <class T>
Table<T> * Restaurant<T>::add()
{
    Table<T> * node = new Table<T>();

    if(head == nullptr)
    {
        head = node;
        node->setPrev(nullptr);
        node->setNext(nullptr);
        return node;
    }
    else
    {
        Table<T> * nodePtr = head;

        while(nodePtr->getNext() != nullptr)
        {
            nodePtr = nodePtr->getNext();
        }

        nodePtr->setNext(node);
        node->setPrev(nodePtr);
        node->setNext(nullptr);

        return node;
    }
}

template <class T>
void Restaurant<T>::createList()
{
    add();
}

template <class T>
void Restaurant<T>::addCustomer(Customer& value)
{
    if(isEmptyList())
    {
       Table<T> * node = add();
       node->addCust(value);
       node->incrementNumCustomers();
    }
    else
    {
        Table<T> * ptr = head;

        while(ptr != nullptr)
        {
            if(!ptr->isFull())
            {
                ptr->addCust(value);
                ptr->incrementNumCustomers(); 
                return;
            }

            ptr = ptr->getNext();
        }

        std::cout << "All the tables are occupied" << std::endl;
        std::cout << "Please wait until a table becomes available" << std::endl;
        return;
    }
}

template <class T>
std::string Restaurant<T>::printCustomers()
{
    Table<T> * node = head;
    int count = 1;
    std::string restaurantCustomers;

    std::stringstream ss;
    std::string table;

    while(node != nullptr)
    {
        if(node == nullptr)
        {
            break;
        }
        else
        {
            ss << count;
            ss >> table;
            restaurantCustomers += "Table " + table + ": " + "\n";
            restaurantCustomers += node->print();
            node = node->getNext();
            count++;
            ss.clear();
        }
    }

    return restaurantCustomers;
}

template <class T>
void Restaurant<T>::remove(T value)
{
    if(head == nullptr)
    {
        return;
    }
    else
    {
        Table<T> * nodePtr = head;

        while(nodePtr->getNext() != nullptr && nodePtr->getValue() != value)
        {
            nodePtr = nodePtr->getNext();
        }

        if(head->getValue() == value)
        {
            head = head->getNext();
            nodePtr->setNext(nullptr);
            head->setPrev(nullptr);

            delete nodePtr;
            nodePtr = nullptr;
        }
        else if(nodePtr->getNext() != nullptr && nodePtr->getValue() == value)
        {
            nodePtr->getPrev()->setNext(nodePtr->getNext());
            nodePtr->getNext()->setPrev(nodePtr->getPrev());
            delete nodePtr;
            nodePtr = nullptr;
        }
        else if(nodePtr->getNext() == nullptr && nodePtr->getValue() == value)
        {
            nodePtr->getPrev()->setNext(nullptr);
            nodePtr->setPrev(nullptr);

            delete nodePtr;
            nodePtr = nullptr;
        }
    }
}

template <class T>
bool Restaurant<T>::isEmptyList()
{
    if(head == nullptr)
    {
        std::cout << "There are no customers in the restaurant" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
Restaurant<T>::~Restaurant()
{
    if(isEmptyList())
    {
        return;
    }
    else
    {
        Table<T> * ptr = head, * deletePtr = nullptr;

        while(ptr != nullptr)
        {
            ptr->getTable().clear();
            deletePtr = ptr;
            ptr = ptr->getNext();
            delete deletePtr;
        }

        head = nullptr;
        deletePtr = nullptr;
        ptr = nullptr;
    }
}

template <class T>
Table<T> * Restaurant<T>::getHead()
{
    if(this->isEmpty())
    {
        return nullptr;
    }
    else
    {
        return head;
    }
}