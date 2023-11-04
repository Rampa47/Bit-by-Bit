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
void Table<T>::removeCustomer()
{
    this->customers.pop_back();
}

template <class T>
void Table<T>::IsEverythingOkay(ComplaintsHandler* CH)
{
    cout<<"Is everything Okay?";
    int okay= 0;
    okay=getRandomZeroOrOne();
    if(okay==1)
    {
        cout<<"Yes, thank you."<<endl;
    }
    else
    {
        cout<<"No."<<endl;
        int degree=generateDegree(); 
        int typecomplaint=generateComplaint();
        if(typecomplaint==2)
        {
            if(c==NULL)
            {
                c=new TimeComplaint(CH,degree);
            }
            else
            {
                if(c->getname()=="Time")
                {
                    c->setDegree(5);
                }
                else
                {
                    delete c;
                    c=new TimeComplaint(CH,degree);
                }
            }
        }
        else if(typecomplaint==4)
        {
            if(c==NULL)
            {
                c=new FoodComplaint(CH,degree);
            }
            else
            {
                if(c->getname()=="Food")
                {
                    c->setDegree(5);
                }
                else
                {
                    delete c;
                    c=new FoodComplaint(CH,degree);
                }
            }
        }
        else
        {
            if(c==NULL)
            {
                c=new ServiceComplaint(CH,degree);
            }
            else
            {
                if(c->getname()=="Service")
                {
                    c->setDegree(5);
                }
                else
                {
                    delete c;
                    c=new ServiceComplaint(CH,degree);
                }
            }
        }

    }
}

template <class T>
int Table<T>::getRandomZeroOrOne() 
{
    // Create a random device to generate random numbers
    random_device rd;

    // Create a random number generator using the random device
    mt19937 gen(rd());

    // Create a distribution that generates 0 or 1 with equal probability
    uniform_int_distribution<int> distribution(0, 1);

    // Generate and return a random 0 or 1
    return distribution(gen);
}

template <class T>
int Table<T>::generateComplaint() 
{
    // Create a random device to generate random numbers
    random_device rd;

    // Create a random number generator using the random device
    mt19937 gen(rd());

    // Create a distribution that generates 0, 2, or 3 with equal probability
    uniform_int_distribution<int> distribution(2, 4);

    // Generate and return a random value of 0, 2, or 3
    return distribution(gen);
}

template <class T>
int Table<T>::generateDegree() 
{
    // Create a random device to generate random numbers
    random_device rd;

    // Create a random number generator using the random device
    mt19937 gen(rd());

    // Create a distribution that generates 0, 2, or 3 with equal probability
    uniform_int_distribution<int> distribution(0, 10);

    // Generate and return a random value of 0, 2, or 3
    return distribution(gen);
}