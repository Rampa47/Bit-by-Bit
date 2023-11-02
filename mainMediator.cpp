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
    std::string Waiterr="Waiter";
    std::string Tablee="Table";
    std::string Maitree="MaitreD";
    std::string ChefHandlerr="ChefHandler";
  Mediator* mediator=new Mediator();
  Table* table=new Table();
  Waiter* waiter=new Waiter(table->getWaiter());
  table->setWaiter(waiter);
 // MaitreD* maitre=MaitreD::instance();
    Colleague* chef= new PoultryChef();
  table->reg(mediator);
  waiter->reg(mediator);
  //maitre->reg(mediator);
  chef->reg(mediator);
  table->send();
   return 0;
}