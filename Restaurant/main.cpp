#include "Restaurant.h"
#include "Table.h"
#include "Restaurant.cpp"
#include "Table.cpp"
#include "Customer.h"
#include "MaitreD.h"
#include "MaitreD.cpp"
#include <iostream>
#include <string>

/*template <class T>
void printList(LinkedList<T>& list);*/

int randomNumCustomers(int min, int max);

int randomCustomers(std::vector<std::string> names);

int main()
{
    Restaurant<std::string> list;
    std::vector<Customer*> vect, secondVect, thirdVect, fourthVect, fifthVect, sixthVect; 
    //MaitreD<std::string> * maitreD;

    std::vector<std::string> names = {
    "Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry",
    "Ivy", "Jack", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Penelope",
    "Quincy", "Rachel", "Samuel", "Taylor", "Uma", "Victor", "Wendy", "Xander",
    "Yasmine", "Zane", "Sophia", "William", "Ella", "James", "Ava", "Elijah",
    "Scarlett", "Benjamin", "Lily", "Lucas", "Chloe", "Aiden", "Zoe" };

    for(int i = 0; i < 5; i++)
    {
        list.add();
    }

    int numCustomers = randomNumCustomers(1,10);

    for(int i = 0; i < numCustomers; i++)
    {
        vect.push_back(new Customer(names[randomCustomers(names)]));
    }

    numCustomers = randomNumCustomers(1,10);

    for(int j = 0; j < numCustomers; j++)
    {
        secondVect.push_back(new Customer(names[randomCustomers(names)]));
    }

    MaitreD<std::string>::instance()->seatCustomers(list,vect);

    MaitreD<std::string>::instance()->seatCustomers(list,secondVect);

    // list.addCustomer(vect);

    // list.addCustomer(secondVect);

    std::cout << list.printCustomers() << std::endl;

    std::cout << "Do we get past printing the customers ?" << std::endl;

    list.isFull();

    std::cout << "We have reached the end of the program" << std::endl;

    for(int i = 0; i < vect.size(); i++)
    {
        delete vect[i];
    }

    for(int k = 0; k < secondVect.size(); k++)
    {
        delete secondVect[k];
    }

    return 0;
}

int randomNumCustomers(int min, int max)
{
    int numCustomers = (rand() % (max - min + 1)) + min;

    return numCustomers;
}

int randomCustomers(std::vector<std::string> vect)
{
    int customerName = (rand() % ((vect.size() - 1) - 1 + 1)) + 1;

    return customerName;
}



/*template <class T>
void printList(LinkedList<T>& list)
{
    if(list.isEmptyList())
    {
        return;
    }
    else
    {
        Node<T> * ptr = list.getHead();

        std::cout << "Here are all the guests in the restaurant" << std::endl;
        while (ptr != nullptr)
        {
            std::cout << ptr->getValue() << " ";
            ptr = ptr->getNext();
        }

        std::cout << std::endl;
    }
}*/