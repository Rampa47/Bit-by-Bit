#include "facade.h"


Facade::Facade(int tables){
    // using the singleton
    maitreD= MaitreD::instance();

    mediator= new Mediator();

    srand((unsigned) time(NULL));
    for(int i=0; i<tables*10; i++){
	    int index = rand()%150;
        customers.push(new Custrestaurantomer(names[index]));
    }

    // using the chain of responsibility
    orderhandler= new PoultryChef();
    orderhandler->reg(mediator);
	orderhandler->addSuccessor(new FryChef());
	orderhandler->addSuccessor(new BurgerChef());
    ChefHandler* hc= new HeadChef();
	orderhandler->addSuccessor(cf);
    hc->reg(mediator);

    restaurant= new Restaurant();
    for (int i=0; i<tables; i++){
        Waiter* w= new Waiter(i,orderhandler);
        waiters.push_back(w);
        w->reg(mediator);
        Table* t= restaurant->add();
        t->reg(mediator);
    }

}
void Facade::execute(){
    srand((unsigned) time(NULL));
	int no_of_customers = rand()%10;
    vector<Customer*> vcustomers;
    for (int i=0; i<no_of_customers; i++){
        Customer* c= customers.front();
        vcustomers.push_back(c);
        customers.pop();
        customers.push(c);
    }
    maitreD->seatCustomers(*restaurant, vcustomers);

}

Facade::~Facade(){
    delete mediator;
    delete orderhandler;
    delete restaurant;
    for (auto c: customers){
        delete c;
    }
    for (auto w: waiters){
        delete w;
    }
}