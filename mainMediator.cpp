#include <iostream>
#include "Mediator.h"
#include "Colleague.h"
#include "Waiter.h"
#include "Table.h"
#include "ChefHandler.h"
#include "MaitreD.h"
#include "PoultryChef.h"
//#include "Colleague.h"
int main() {
  Mediator* mediator=new Mediator();
  Table* table=new Table();
  Table* table2=new Table();
  Waiter* waiter=new Waiter();
  Waiter* waiter2=new Waiter();
  table->setWaiter(waiter);
  table2->setWaiter(waiter2);
 // MaitreD* maitre=MaitreD::instance();
 //ChefHandler* c= new PoultryChef();
 Colleague* chef= new PoultryChef();
 table->reg(mediator);
 table2->reg(mediator);
 waiter->reg(mediator);
 waiter2->reg(mediator);

  chef->reg(mediator);
  //table->send(); works
  //table2->send(); work
  chef->send();

   return 0;
}