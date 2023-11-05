#include "Restaurant.h"

int Restaurant::currentNumWaitingAreas = 0;

Restaurant::Restaurant()
{
    head = nullptr;
    maxNumWaitingAreas = 3;
}

Table * Restaurant::add()
{
    Table * node = new Table();

    if(head == nullptr)
    {
        head = node;
        node->setPrev(nullptr);
        node->setNext(nullptr);
        return node;
    }
    else
    {
        Table * nodePtr = head;

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

Table * Restaurant::addWaitingArea()
{
    if(head == nullptr)
    {
        std::cout << "Cannot add waiting area to a restaurant has not been created." << std::endl;
        return nullptr;
    }
    else
    {
        Table * node = new Table(true);

        Table * nodePtr = head;

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

void Restaurant::createList()
{
    int numTables;
    std::cout << "Welcome to CoutureFood" << std::endl;
    std::cout << "How many tables would you like to add to the restaurant." << std::endl;
    std::cin >> numTables;

    while(numTables <= 0)
    {
        std::cout << "Please select a valid number of tables to create." << std::endl;
    }

    for(int i = 0; i < numTables; i++)
    {
        add();
    }
    
}

void Restaurant::addCustomer(std::vector<Customer*> vect)
{
    if(isEmptyList())
    {
        Table * node = add();
        bool extraCustomers = false;

        if(vect.size() >= node->getMaxNumCustomers(extraCustomers))
        {
            extraCustomers = true;
        }

        for(size_t i = 0; i < vect.size(); i++)
        {
            if(!extraCustomers)
            {
                node->addCust(vect[i]);
                node->incrementNumCustomers(); 
            }
            else if(extraCustomers)
            {
                node->addCust(vect[i]);
                node->incrementNumCustomers();
            }
        }

        return;
    }
    else
    {
        bool extraCustomers = false;
        Table * ptr = head;

        Table * waitingArea = nullptr;
        bool fullRestaurant = false;

        if(vect.size() > ptr->getMaxNumCustomers(extraCustomers))
        {
            extraCustomers = true;
        }

        while(ptr != nullptr)
        {
            if((!ptr->isFull(extraCustomers) && !ptr->getTableType()) && !ptr->isOccupied())
            {
                for(size_t j = 0; j < vect.size(); j++)
                {
                    if(!extraCustomers)
                    {
                        ptr->addCust(vect[j]);
                        ptr->incrementNumCustomers();
                    }
                    else if(ptr->getNumCurrentCustomers() <= ptr->getMaxNumCustomers(extraCustomers))
                    {
                        ptr->addCust(vect[j]);
                        ptr->incrementNumCustomers();
                    }
                }
                ptr->getWaiter()->greetCustomer();
                ptr->print();
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

            Table * nodePtr = addWaitingArea();

            for(size_t k = 0; k < vect.size(); k++)
            {
                nodePtr->addCust(vect[k]);
                nodePtr->incrementNumCustomers();
            }
            currentNumWaitingAreas++;

            return;
        }
        else
        {
            while(waitingArea != nullptr)
            {
                if(!waitingArea->isFull(false))
                {
                    for(size_t i = 0; i < vect.size(); i++)
                    {
                        waitingArea->addCust(vect[i]);
                        waitingArea->incrementNumCustomers();
                    }
                    return;
                }

                if(waitingArea->getNext() == nullptr)
                {
                    break;
                }

                waitingArea = waitingArea->getNext();
            }

            if(waitingArea->isFull(false) && currentNumWaitingAreas <= 3)
            {
                Table * newWaitingArea = addWaitingArea();

                for(size_t j = 0; j < vect.size(); j++)
                {
                    waitingArea->addCust(vect[j]);
                    waitingArea->incrementNumCustomers();
                }

                return;
            }

            // std::cout << "The restaurant is filled to capacity" << std::endl;
            // std::cout << "Apologies for the inconvenience. Please come back another time." << std::endl;
            return;
        }
    }
}

std::string Restaurant::printCustomers()
{
    Table * node = head;
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
                ss.clear();
                ss << node->getWaiterNumber();
                string wn;
                ss >> wn;
                restaurantCustomers += "Table " + table + ", Waiter "+wn+": \n";
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

bool Restaurant::isEmptyList()
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

Restaurant::~Restaurant()
{
    if(isEmptyList())
    {
        return;
    }
    else
    {
        Table * ptr = head, * deletePtr = nullptr;

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

Table * Restaurant::getHead()
{
    if(this->head->isEmpty())
    {
        return nullptr;
    }
    else
    {
        return head;
    }
}

bool Restaurant::isFull()
{
    Table * nodePtr = head;
    bool occupied = false;

    int numGuestsForFullRequirement = nodePtr->getMaxNumCustomers(false) * getNumTables();
    int maxAllowedGuests = nodePtr->getMaxNumCustomers(true) * getNumTables(); 
    int guestCounter = 0;

    while(nodePtr != nullptr)
    {
        if(!nodePtr->getTableType())
        {
            guestCounter += nodePtr->getNumCurrentCustomers();
        }

        if(nodePtr->isOccupied())
        {
            occupied = true;
        }
        else
        {
            occupied = false;
        }

        if((guestCounter >= numGuestsForFullRequirement || guestCounter <= maxAllowedGuests) || occupied)
        {
            return true;
        }

        nodePtr = nodePtr->getNext();
    }

    return false;
}

int Restaurant::getNumTables()
{
    if(head == nullptr)
    {
        return 0;
    }
    else
    {
        Table * nodePtr = head;
        int count = 0;

        while(nodePtr != nullptr && !nodePtr->getTableType())
        {
            count++;
            nodePtr = nodePtr->getNext();
        }

        return count;
    }
}


TableIterator* Restaurant::createIterator()
{
    return new TableIterator(head);
}

Table * Restaurant::getTableAt(int index)
{
    if(this->isEmptyList())
    {
        return nullptr;
    }
    else
    {
        if(index < 0 || index >= getNumTables())
        {
            return nullptr;
        }
        else
        {
            int count = 0;
            Table * nodePtr = head;

            while(nodePtr != nullptr && count != index)
            {
                nodePtr = nodePtr->getNext();
                count++;
            }

            if(count == index)
            {
                return nodePtr;
            }
        }

        return nullptr;
    }
}

void Restaurant::remove(Table * table)
{
    if(isEmptyList())
    {
        return;
    }
    else
    {
        for(int i = 0; i < getNumTables(); i++)
        {
            if(getTableAt(i) == table)
            {
                getTableAt(i)->removeCustomers();
                return;
            }
        }   
    }
}