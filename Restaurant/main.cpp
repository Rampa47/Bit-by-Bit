#include "Restaurant.h"
#include "Table.h"
#include "Restaurant.cpp"
#include "Table.cpp"
#include "Customer.h"
#include "MaitreD.h"
#include <iostream>
#include <string>

/*template <class T>
void printList(LinkedList<T>& list);*/

int main()
{
    Restaurant<std::string> list;
    //MaitreD<std::string> * maitreD = MaitreD<std::string>::instance();

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
    Customer twelthCustomer("Lola");
    Customer thirteenthCustomer("Jennifer");
    Customer fourteenthCustomer("Nick");
    Customer fifteenthCustomer("Andrew");
    Customer sixteenthCustomer("Phyllis");
    Customer seventeenthCustomer("Andrea");
    Customer eighteenthCustomer("Anthony");
    Customer nineteenthCustomer("Alfredo");
    Customer twentiethCustomer("Sonny");
    Customer twentyFirstCustomer("Johnson");
    Customer TwentySecondCustomer("Rick");
    Customer TwentyThirdCustomer("Robert");
    Customer TwentyFourthCustomer("Barney");
    Customer TwentyFifthCustomer("Stanley");
    Customer twentySixthCustomer("Nicholas");
    Customer twentySeventhCustomer("Jerrico");
    Customer twentyEighthCustomer("Nebuchadnezzar");
    Customer twentyninthCustomer("Elijah");
    Customer thirtiethCustomer("Franklin");
    Customer thirtyFirstCustomer("Trevor");
    Customer thirtySecondCustomer("Francis");
    Customer thirtyThirdCustomer("Jeremiah");


    //maitreD->seatCustomers(list, newCustomer);

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
    list.addCustomer(twelthCustomer);
    list.addCustomer(thirteenthCustomer);
    list.addCustomer(fourteenthCustomer);
    list.addCustomer(fifteenthCustomer);
    list.addCustomer(sixteenthCustomer);
    list.addCustomer(seventeenthCustomer);
    list.addCustomer(eighteenthCustomer);
    list.addCustomer(nineteenthCustomer);
    list.addCustomer(twentiethCustomer);
    list.addCustomer(twentyFirstCustomer);
    list.addCustomer(TwentySecondCustomer);
    list.addCustomer(TwentyThirdCustomer);
    list.addCustomer(TwentyFourthCustomer);
    list.addCustomer(TwentyFifthCustomer);
    //std::cout << "Does the segmentation fault occur here when we add the overflow ?" << std::endl;
    list.addCustomer(twentySixthCustomer);
    list.addCustomer(twentySeventhCustomer);
    list.addCustomer(twentyEighthCustomer);
    list.addCustomer(twentyninthCustomer);
    list.addCustomer(thirtiethCustomer);
    list.addCustomer(thirtyFirstCustomer);
    list.addCustomer(thirtySecondCustomer);
    list.addCustomer(thirtyThirdCustomer);
    //std::cout << "It must be in the print function perhaps" << std::endl;

    std::cout << list.printCustomers() << std::endl;

    list.isFull();

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