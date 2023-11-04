#include <iostream>
#include "Waiter.h"
#include "Waiter.cpp"
#include "Manager.h"
#include "Manager.cpp"
#include"Context.h"
#include "TimeComplaint.h"
#include "FoodComplaint.h"
#include "ServiceComplaint.h"
//#include "MaitreD.h"
//#include "MaitreD.cpp"
//#include "AllWaiters.h"
//#include "AllWaiters.cpp"
#include "Table.h"
using namespace std;

int main() 
{
   

    HeadChef* chef= new HeadChef();
    Waiter* handler1= new Waiter(1);
    Waiter* handler2= new Waiter(2);

    handler1->addNext(chef);
    handler2->addNext(chef);
    chef->addNext(new Manager());

    /// then as the maitre d makes wounds they will ask 
    Table<string>* t1= new Table<string>(); //honestly dont know what type
    Table<string>* t2= new Table<string>();
    t1->IsEverythingOkay(handler1);
    t2->IsEverythingOkay(handler2);

    delete t2;
    delete t1;
    delete handler2;
    delete handler1;
    delete chef;


    return 0;
}