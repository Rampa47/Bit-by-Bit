#include "Table.h"

Table::Table()
{
    next = nullptr;
    numCurrentCustomers = 0;
    isWaitingArea = false;
}

Table::Table(bool isWaitingArea)
{
    this->isWaitingArea = isWaitingArea;
    next = nullptr;
    numCurrentCustomers = 0;
}


Table * Table::getNext()
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


Table * Table::getPrev()
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


void Table::setNext(Table * node)
{
    this->next = node;
}


void Table::setPrev(Table * node)
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


std::string Table::getValue(std::string value)
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


int Table::getMaxNumCustomers(bool value)
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


int Table::getNumCurrentCustomers()
{
    return numCurrentCustomers;
}


bool Table::isFull(bool value)
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


bool Table::isEmpty()
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


bool Table::isOccupied()
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


std::vector<Customer*> Table::getTable()
{
    return customers;
}


std::string Table::print()
{
    std::string people;
    std::vector<Customer*>::iterator it;

    for(size_t i = 0; i < customers.size(); i++)
    {
        people += customers[i]->getName() + "\n";
    }

    return people;
}


void Table::incrementNumCustomers()
{
    numCurrentCustomers++;
}


void Table::addCust(Customer * value)
{
    customers.push_back(value);
}


bool Table::getTableType()
{
    return isWaitingArea;
}


void Table::removeCustomers()
{
    customers.clear();
    numCurrentCustomers = 0;
}