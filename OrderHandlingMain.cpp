// #include <iostream>
// #include "PoultryChef.h"
// #include "FryChef.h"
// #include "BurgerChef.h"
// #include "HeadChef.h"
// #include "Customer.h"
// #include "Table.h"


// using namespace std;

// int main() 
// {
// 	//Assemble the chain:
// 	ChefHandler* orderhandler = new PoultryChef();
// 	orderhandler->addSuccessor(new FryChef());
// 	orderhandler->addSuccessor(new BurgerChef());
// 	orderhandler->addSuccessor(new HeadChef());
// 	vector<Customer*> customers;
// 	Table* table;
// 	for (int i=0; i<5; i++ ){
// 		customers.push_back(new Customer());
// 		table->addCust(customers[i]);
// 	}

// 	Waiter* waiter= new Waiter(1);
// 	table->setWaiter(waiter);
// 	table->callWaiter(orderhandler);
	

// 	for (auto c: customers){
// 		delete c;
// 	}
//     delete orderhandler;
// 	delete waiter;
// 	delete table;

//     return 0;
// }
#include <iostream>
#include <string>
#include "Waiter.h"
#include "Manager.h"
#include "Context.h"
#include "MaitreD.h"
#include "Customer.h"
#include "BeefBurger.h"
#include "ChefHandler.h"
#include "AwaitingBill.h"
#include "Complaint.h"
#include "Colleague.h"
#include "ChipSauce.h"
//#include "TimeComplaint.h"
#include "FoodComplaint.h"
//#include "ServiceComplaint.h"
#include "PoultryChef.h"
#include "BurgerChef.h"
#include "FryChef.h"
#include "HeadChef.h"
using namespace std;

int randomNumCustomers(int min, int max);

int randomCustomers(std::vector<std::string> names);

int main() 
{
// 	Restaurant list;
//     std::vector<std::string> names = {"Michael", "John", "Thomas", "Jennifer", "Thabo", "Henry", "Samuel", "Benjamin"};
//     std::vector<Customer*> customers;
//     ComplaintsHandler * handler= new Waiter(5);
//     MaitreD * MD = MaitreD::instance(); //add once class is fixed
//     //handler->addNext(MaitreD::instance());
//     //add once class is fixed
//     list.createList();
//     for(int i = 0; i < 5; i++)
//     {
//         customers.push_back(new Customer())
//     }
//     handler->addNext(new Manager());
//     Context* context[3];
//    // context[0] = new Context(new TimeComplaint(handler));
//     context[0]->AddressComplaint("We have been waiting for our order for over 30 minutes!",2);
//     cout<<endl;

//     context[1] = new Context(new FoodComplaint(handler));
//     context[1]->AddressComplaint("The food is too cold!",2);
//     cout<<endl;
    
//     //context[2] = new Context(new ServiceComplaint(handler));
//     context[2]->AddressComplaint("Our waiter was rude!",5);
//     cout<<endl;

//     for (int i = 0; i < 3; i++)
//     {
//         delete context[i];
//         context[i] = nullptr;
//     }
	ChefHandler* orderhandler = new PoultryChef();
 	orderhandler->addSuccessor(new FryChef());
	orderhandler->addSuccessor(new BurgerChef());
 	orderhandler->addSuccessor(new HeadChef());
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
           Table* table=new Table();
 

 	Waiter* waiter= new Waiter(1,orderhandler);
 	table->setWaiter(waiter);
 	table->callWaiter(orderhandler);
    MaitreD::instance()->seatCustomers(list,vect);

    MaitreD::instance()->seatCustomers(list,secondVect);

    MaitreD::instance()->seatCustomers(list,thirdVect);

    std::cout << list.printCustomers() << std::endl;

    std::cout << "Removing customers from a table" << std::endl;

    list.remove(list.getTableAt(1));

    std::cout << "Printing the customers again after the removal" << std::endl;
    std::cout << list.printCustomers() << std::endl;


    for(size_t i = 0; i < vect.size(); i++)
    {
        delete vect[i];
    }

    for(size_t k = 0; k < secondVect.size(); k++)
    {
        delete secondVect[k];
    }

    for(size_t j = 0; j < thirdVect.size(); j++)
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