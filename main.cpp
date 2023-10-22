#include "LinkedList.h"
#include "Node.h"
#include "LinkedList.cpp"
#include "Node.cpp"
#include "Customer.h"
#include <iostream>
#include <string>

/*template <class T>
void printList(LinkedList<T>& list);*/

int main()
{
    LinkedList<std::string> list;

    for(int i = 0; i < 5; i++)
    {
        list.add();
    }

    Customer newCustomer("Michael");
    Customer secondCustomer("Thomas");
    Customer thirdCustomer("Jackson");
    Customer fourthCustomer("Dwayne");
    Customer fifthCustomer("James");
    Customer sixthCustomer("Keith");
    Customer seventhCustomer("George");
    Customer eighthCustomer("Christopher");
    Customer ninthCustomer("Leslie");
    Customer tenthCustomer("Brendan");
    Customer eleventhCustomer("Jessica");

    list.addCustomer(newCustomer);
    list.addCustomer(secondCustomer);
    list.addCustomer(thirdCustomer);
    list.addCustomer(fourthCustomer);
    list.addCustomer(fifthCustomer);
    list.addCustomer(sixthCustomer);
    list.addCustomer(seventhCustomer);
    list.addCustomer(eighthCustomer);
    list.addCustomer(ninthCustomer);
    list.addCustomer(tenthCustomer);
    list.addCustomer(eleventhCustomer);

    std::cout << list.printCustomers() << std::endl;

    std::cout << "We have reached the end of the program" << std::endl;

    return 0;
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