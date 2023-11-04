#include "Restaurant.h"
#include "Table.h"
#include "Customer.h"
#include "MaitreD.h"
#include <iostream>
#include <string>

int randomNumCustomers(int min, int max);

int randomCustomers(std::vector<std::string> names);

int main()
{
    Restaurant list;
    std::vector<Customer*> vect, secondVect, thirdVect, fourthVect, fifthVect, sixthVect; 
    //MaitreD<std::string> * maitreD;

    std::vector<std::string> names = {
    "Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry",
    "Ivy", "Jack", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Penelope",
    "Quincy", "Rachel", "Samuel", "Taylor", "Uma", "Victor", "Wendy", "Xander",
    "Yasmine", "Zane", "Sophia", "William", "Ella", "James", "Ava", "Elijah",
    "Scarlett", "Benjamin", "Lily", "Lucas", "Chloe", "Aiden", "Zoe" };

    list.createList();

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

    numCustomers = randomNumCustomers(1,10);

    for(int k = 0; k < numCustomers; k++)
    {
        thirdVect.push_back(new Customer(names[randomCustomers(names)]));
    }

    MaitreD::instance()->seatCustomers(list,vect);

    MaitreD::instance()->seatCustomers(list,secondVect);

    MaitreD::instance()->seatCustomers(list,thirdVect);

    // list.addCustomer(vect);

    // list.addCustomer(secondVect);

    std::cout << list.printCustomers() << std::endl;

    std::cout << "Removing customers from a table" << std::endl;

    list.remove(list.getTableAt(1));

    std::cout << "Printing the customers again after the removal" << std::endl;
    std::cout << list.printCustomers() << std::endl;

    for(int i = 0; i < vect.size(); i++)
    {
        delete vect[i];
    }

    for(int k = 0; k < secondVect.size(); k++)
    {
        delete secondVect[k];
    }

    for(int j = 0; j < thirdVect.size(); j++)
    {
        delete thirdVect[j];
    }

    std::cout << "We have reached the end of the program" << std::endl;

    names.clear();

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
