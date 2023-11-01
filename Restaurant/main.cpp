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
    std::vector<Customer*> vect, secondVect, thirdVect, fourthVect, fifthVect, sixthVect;
    //MaitreD<std::string> * maitreD = MaitreD<std::string>::instance();

    for(int i = 0; i < 5; i++)
    {
        list.add();
    }

    std::vector<std::string> names  = {
    "Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry",
    "Ivy", "Jack", "Katherine", "Liam", "Mia", "Noah", "Olivia", "Penelope",
    "Quincy", "Rachel", "Samuel", "Taylor", "Uma", "Victor", "Wendy", "Xander",
    "Yasmine", "Zane", "Sophia", "William", "Ella", "James", "Ava", "Elijah",
    "Scarlett", "Benjamin", "Lily", "Lucas", "Chloe", "Aiden", "Zoe"
    };


    Customer newCustomer("Michael");
    vect.push_back(&newCustomer);
    Customer secondCustomer("Thomas");
    vect.push_back(&secondCustomer);
    Customer thirdCustomer("Jackson");
    vect.push_back(&thirdCustomer);
    Customer fourthCustomer("Dwayne");
    vect.push_back(&fourthCustomer);
    Customer fifthCustomer("James");
    vect.push_back(&fifthCustomer);
    Customer sixthCustomer("Keith");
    vect.push_back(&sixthCustomer);
    list.addCustomer(vect);
    Customer seventhCustomer("George");
    secondVect.push_back(&sixthCustomer);
    secondVect.push_back(&seventhCustomer);
    list.addCustomer(secondVect);

    Customer eighthCustomer("Christopher");
    thirdVect.push_back(&eighthCustomer);
    list.addCustomer(thirdVect);
    Customer ninthCustomer("Leslie");
    fourthVect.push_back(&ninthCustomer);
    list.addCustomer(fourthVect);
    Customer tenthCustomer("Brendan");
    fifthVect.push_back(&tenthCustomer);
    list.addCustomer(fifthVect);
    Customer eleventhCustomer("Jessica");
    sixthVect.push_back(&eleventhCustomer);
    list.addCustomer(sixthVect);
    Customer twelthCustomer("Lola");
    // Customer thirteenthCustomer("Jennifer");
    // Customer fourteenthCustomer("Nick");
    // Customer fifteenthCustomer("Andrew");
    // Customer sixteenthCustomer("Phyllis");
    // Customer seventeenthCustomer("Andrea");
    // Customer eighteenthCustomer("Anthony");
    // Customer nineteenthCustomer("Alfredo");
    // Customer twentiethCustomer("Sonny");
    // Customer twentyFirstCustomer("Johnson");
    // Customer TwentySecondCustomer("Rick");
    // Customer TwentyThirdCustomer("Robert");
    // Customer TwentyFourthCustomer("Barney");
    // Customer TwentyFifthCustomer("Stanley");
    // Customer twentySixthCustomer("Nicholas");
    // Customer twentySeventhCustomer("Jerrico");
    // Customer twentyEighthCustomer("Nebuchadnezzar");
    // Customer twentyninthCustomer("Elijah");
    // Customer thirtiethCustomer("Franklin");
    // Customer thirtyFirstCustomer("Trevor");
    // Customer thirtySecondCustomer("Francis");
    // Customer thirtyThirdCustomer("Jeremiah");


    //maitreD->seatCustomers(list, newCustomer);

    // list.addCustomer(newCustomer);
    // list.addCustomer(secondCustomer);
    // list.addCustomer(thirdCustomer);
    // list.addCustomer(fourthCustomer);
    // list.addCustomer(fifthCustomer);
    // list.addCustomer(sixthCustomer);
    // list.addCustomer(seventhCustomer);
    // list.addCustomer(eighthCustomer);
    // list.addCustomer(ninthCustomer);
    // list.addCustomer(tenthCustomer);
    // list.addCustomer(eleventhCustomer);
    // list.addCustomer(twelthCustomer);
    // list.addCustomer(thirteenthCustomer);
    // list.addCustomer(fourteenthCustomer);
    // list.addCustomer(fifteenthCustomer);
    // list.addCustomer(sixteenthCustomer);
    // list.addCustomer(seventeenthCustomer);
    // list.addCustomer(eighteenthCustomer);
    // list.addCustomer(nineteenthCustomer);
    // list.addCustomer(twentiethCustomer);
    // list.addCustomer(twentyFirstCustomer);
    // list.addCustomer(TwentySecondCustomer);
    // list.addCustomer(TwentyThirdCustomer);
    // list.addCustomer(TwentyFourthCustomer);
    // list.addCustomer(TwentyFifthCustomer);
    //std::cout << "Does the segmentation fault occur here when we add the overflow ?" << std::endl;
    // list.addCustomer(twentySixthCustomer);
    // list.addCustomer(twentySeventhCustomer);
    // list.addCustomer(twentyEighthCustomer);
    // list.addCustomer(twentyninthCustomer);
    // list.addCustomer(thirtiethCustomer);
    // list.addCustomer(thirtyFirstCustomer);
    // list.addCustomer(thirtySecondCustomer);
    // list.addCustomer(thirtyThirdCustomer);
    //std::cout << "It must be in the print function perhaps" << std::endl;

    std::cout << list.printCustomers() << std::endl;

    std::cout << "Do we get past printing the customers ?" << std::endl;

    list.isFull();

    std::cout << "We have reached the end of the program" << std::endl;

    vect.clear();

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