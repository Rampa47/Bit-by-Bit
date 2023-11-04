#include <iostream>
#include "PoultryChef.h"
#include "FryChef.h"
#include "BurgerChef.h"
#include "HeadChef.h"
#include "Customer.h"
#include "Table.h"


using namespace std;

int main() 
{
	//Assemble the chain:
	ChefHandler* orderhandler = new PoultryChef();
	orderhandler->addSuccessor(new FryChef());
	orderhandler->addSuccessor(new BurgerChef());
	orderhandler->addSuccessor(new HeadChef());
	vector<Customer*> customers;
	Table<int>* table;
	for (int i=0; i<5; i++ ){
		customers.push_back(new Customer());
		table->addCust(customers[i]);
	}

	Waiter* waiter= new Waiter(1);
	table->setWaiter(waiter);
	table->callWaiter(orderhandler);
	

	for (auto c: customers){
		delete c;
	}
    delete orderhandler;
	delete waiter;
	delete table;

    return 0;
}