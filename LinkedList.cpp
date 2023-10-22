#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
}

template <class T>
Node<T> * LinkedList<T>::add()
{
    Node<T> * node = new Node<T>();

    if(head == nullptr)
    {
        head = node;
        node->setPrev(nullptr);
        node->setNext(nullptr);
    }
    else
    {
        Node<T> * nodePtr = head;

        while(nodePtr->getNext() != nullptr)
        {
            nodePtr = nodePtr->getNext();
        }

        nodePtr->setNext(node);
        node->setPrev(nodePtr);
        node->setNext(nullptr);
    }
}

template <class T>
void LinkedList<T>::createList()
{
    add();
}

template <class T>
void LinkedList<T>::addCustomer(Customer& value)
{
    if(isEmptyList())
    {
       Node<T> * node = add();
       node->addCust(value);
       node->incrementNumCustomers();
    }
    else
    {
        Node<T> * ptr = head;

        while(ptr->getNext() != nullptr)
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
    }
}

template <class T>
std::string LinkedList<T>::printCustomers()
{
    Node<T> * node = head;
    int count = 1;
    std::string restaurantCustomers;

    std::stringstream ss;
    std::string table;

    while(!node->isEmpty())
    {
        ss << count;
        ss >> table;
        restaurantCustomers += "Table " + table + ": " + "\n";
        restaurantCustomers += node->print();
        node = node->getNext();
        count++;
        ss.clear();
    }

    return restaurantCustomers;
}

template <class T>
void LinkedList<T>::remove(T value)
{
    if(head == nullptr)
    {
        return;
    }
    else
    {
        Node<T> * nodePtr = head;

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
bool LinkedList<T>::isEmptyList()
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
LinkedList<T>::~LinkedList()
{
    if(isEmptyList())
    {
        return;
    }
    else
    {
        Node<T> * ptr = head, * deletePtr = nullptr;

        while(ptr->getNext() != nullptr)
        {
            ptr->getTable().clear();
            deletePtr = ptr;
            ptr = ptr->getNext();
            delete deletePtr;
        }

        head = nullptr;
        deletePtr = nullptr;
    }
}

template <class T>
Node<T> * LinkedList<T>::getHead()
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