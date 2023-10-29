#include "Restaurant.h"

template <class T>
int Restaurant<T>::currentNumWaitingAreas = 0;

template <class T>
Restaurant<T>::Restaurant()
{
    head = nullptr;
    maxNumWaitingAreas = 3;
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
Table<T> * Restaurant<T>::addWaitingArea()
{
    if(head == nullptr)
    {
        std::cout << "Cannot add waiting area to a restaurant has not been created." << std::endl;
        return nullptr;
    }
    else
    {
        Table<T> * node = new Table<T>(true);

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
       return;
    }
    else
    {
        Table<T> * ptr = head;
        Table<T> * waitingArea = nullptr;
        bool fullRestaurant = false;

        while(ptr != nullptr)
        {
            if(!ptr->isFull() && !ptr->getTableType())
            {
                ptr->addCust(value);
                ptr->incrementNumCustomers(); 
                return;
            }

            if(ptr->getNext() == nullptr)
            {
                waitingArea = ptr;
                fullRestaurant = true;
                break;
            }

            if(ptr->getNext()->getTableType())
            {
                waitingArea = ptr->getNext();
                break;
            }

            ptr = ptr->getNext();
        }

        if(fullRestaurant)
        {
            std::cout << "All the tables are occupied" << std::endl;
            std::cout << "Please sit in the waiting area until a table becomes available" << std::endl;

            Table<T> * nodePtr = addWaitingArea();
            nodePtr->addCust(value);

            nodePtr->incrementNumCustomers();
            currentNumWaitingAreas++;

            return;
        }
        else
        {
            while(waitingArea != nullptr)
            {
                if(!waitingArea->isFull())
                {
                    waitingArea->addCust(value);
                    waitingArea->incrementNumCustomers();
                    return;
                }

                if(waitingArea->getNext() == nullptr)
                {
                    break;
                }

                waitingArea = waitingArea->getNext();
            }

            if(waitingArea->isFull() && currentNumWaitingAreas <= 3)
            {
                Table<T> * newWaitingArea = addWaitingArea();
                newWaitingArea->addCust(value);

                waitingArea->incrementNumCustomers();
                return;
            }

            // std::cout << "The restaurant is filled to capacity" << std::endl;
            // std::cout << "Apologies for the inconvenience. Please come back another time." << std::endl;
            return;
        }
    }
}

template <class T>
std::string Restaurant<T>::printCustomers()
{
    Table<T> * node = head;
    int count = 1, waitingAreas = 1;
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
            if(!node->getTableType())
            {
                ss << count;
                ss >> table;
                restaurantCustomers += "Table " + table + ": " + "\n";
                restaurantCustomers += node->print();
                node = node->getNext();
                count++;
                ss.clear();
            }
            else
            {
                ss << waitingAreas;
                ss >> table;
                restaurantCustomers += "Waiting Table " + table + ": " + "\n";
                restaurantCustomers += node->print();
                node = node->getNext();
                waitingAreas++;
                ss.clear();
            }
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

template <class T>
bool Restaurant<T>::isFull()
{
    Table<T> * nodePtr = head;

    int maxAllowedGuests = nodePtr->getMaxNumCustomers() * getNumTables(); 
    int guestCounter = 0;

    while(nodePtr != nullptr)
    {
        if(nodePtr->isFull() && (!nodePtr->getTableType()))
        {
            guestCounter += nodePtr->getNumCurrentCustomers();
            nodePtr = nodePtr->getNext();
        }

        if(guestCounter == maxAllowedGuests)
        {
            return true;
        }
    }

    return false;
}

template <class T>
int Restaurant<T>::getNumTables()
{
    if(head == nullptr)
    {
        return 0;
    }
    else
    {
        Table<T> * nodePtr = head;
        int count = 0;

        while(nodePtr != nullptr && !nodePtr->getTableType())
        {
            count++;
            nodePtr = nodePtr->getNext();
        }

        return count;
    }
}