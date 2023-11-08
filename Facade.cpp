#include "Facade.h"
#include "ThreadSleep.h"


Facade::Facade(int tables){
    // using the singleton
    maitreD= MaitreD::instance();

    mediator= new Mediator();

    for(int i=0; i<tables*10; i++){
	    int index = ThreadSleep::generateRandomNumber(0,149);
        customers.push(new Customer(names[index]));
    }

    // using the chain of responsibility
    manager= new Manager();
    orderhandler= new PoultryChef();
    orderhandler->reg(mediator);
	orderhandler->addSuccessor(new FryChef());
	orderhandler->addSuccessor(new BurgerChef());
    HeadChef* hc= new HeadChef();
    hc->reg(mediator);
    hc->addNext(manager);
	orderhandler->addSuccessor(hc);
    
    


    restaurant= new Restaurant();
    for (int i=0; i<tables; i++){
        Waiter* w= new Waiter(i+1,orderhandler);
        w->addNext(hc);
        waiters.push_back(w);
        w->reg(mediator);
        Table* t= restaurant->add();
        t->setWaiter(waiters[i]);
        t->reg(mediator);
    }

}
void Facade::execute1(){
    cout<<"New Customers entered restaurant..."<<endl;
	int no_of_customers = ThreadSleep::generateRandomNumber(1,10);
    vector<Customer*> vcustomers;
    for (int i=0; i<no_of_customers; i++){
        Customer* c= customers.front();
        vcustomers.push_back(c);
        customers.pop();
        customers.push(c);
    }
    Table* table= maitreD->seatCustomers(*restaurant, vcustomers);
    cout<<"----------------------------------------------------------------\n";
    for (Table* t: pipeline){
        t->setState();
        if (t->getState()->toString()=="Empty Table"){
            pipeline.erase(pipeline.begin());    
        }
        else{
            t->getState()->handle(*t);
            cout<<"----------------------------------------------------------------\n";
        }
    }
    if (table!=NULL) pipeline.push_back(table);
    
    

}

void Facade::execute2(){
    cout<<"MaitreD is doing rounds..."<<endl<<endl;
    maitreD->checkingOnTable(restaurant);
    cout<<endl<<"Tables after rounds..."<<endl<<endl;
    cout<<restaurant->printCustomers();
    cout<<"----------------------------------------------------------------\n";
    for (Table* t: pipeline){
        t->setState();
        if (t->getState()->toString()=="Empty Table"){
            pipeline.erase(pipeline.begin());    
        }
        else{
            t->getState()->handle(*t);
            cout<<"----------------------------------------------------------------\n";
        }
    }

}

Facade::~Facade(){
    delete mediator;
    delete orderhandler;
    delete restaurant;
    delete manager;
    while (!customers.empty()) {
        Customer* c= customers.front();
        customers.pop();
        delete c;
    }
    for (auto w: waiters){
        delete w;
    }
}


std::array<std::string, 150> Facade::names= {
        "C. Henson", "C. Key", "C. Grey", "A. Cooke", "G. Shipman", "B. Hendrix", "I. Maier", "C. Hacker", "S. Mcafee", "B. Crow",
        "M. Cantrell", "D. Acosta", "M. Ponder", "E. Hawley", "J. Hofer", "P. Desimone", "T. Beck", "A. Galindo", "M. Hunter", "K. Derosa",
        "M. Schindler", "S. Boss", "O. Forsythe", "E. Seibert", "B. Hinkle", "D. Busby", "G. Peace", "M. Montalvo", "D. McGovern", "C. Waddell",
        "C. Motley", "S. Zamora", "K. Zapata", "A. McCord", "T. Hancock", "W. Whittaker", "T. Hopkins", "A. Zimmerman", "V. Traylor", "N. Shultz",
        "H. Gaines", "L. Liu", "D. Peyton", "C. Earl", "T. Romero", "T. Richard", "F. Willson", "A. Hamlin", "K. Peyton", "N. McWilliams",
        "A. Willey", "Z. Aiken", "B. Hollingsworth", "A. Cross", "M. Butcher", "B. Brooks", "B. Thigpen", "D. Drake", "P. Pederson", "R. Lilly",
        "K. Forsythe", "K. Leigh", "M. Lucero", "K. Barone", "D. Currie", "B. Lincoln", "E. Muse", "K. Patrick", "F. Kendrick", "H. France",
        "T. Cardwell", "T. Lassiter", "M. Dowdy", "P. Doughty", "G. Olsen", "M. Lai", "J. Chase", "M. Gleason", "A. Baldwin", "A. Pease",
        "M. Slaughter", "E. Lowry", "R. Aiello", "D. Cain", "C. Marx", "M. Brockman", "T. Sepulveda", "M. Stark", "H. Pena", "K. Duggan",
        "A. Beavers", "C. Bethea", "A. Thompson", "A. Sneed", "T. Best", "A. Oliveira", "K. Sheffield", "J. Goff", "E. Langdon", "T. Salazar",
        "D. Chapman", "M. Hutchinson", "S. Packer", "A. Hargis", "D. Epstein", "K. Vick", "D. Murdock", "L. Noyes", "J. Thorpe", "L. Quarles",
        "A. Watson", "B. Timmons", "J. Buffington", "D. Bates", "D. Adame", "R. Layne", "N. Lazo", "Z. Burger", "K. Dougherty", "K. Driver",
        "I. Mojica", "D. Fulmer", "L. Welker", "J. Nevarez", "F. Schott", "K. Lerma", "M. Rider", "K. Stratton", "M. Smallwood", "B. Menendez",
        "M. McLeod", "S. Baumgartner", "A. Fuchs", "M. Miles", "E. Rubin", "R. Venegas", "L. Sullivan", "A. Colon", "A. McCloud", "D. Winslow",
        "A. Kidwell", "G. Reynoso", "S. Drury", "J. Clemens", "M. Moreno", "D. Rhoades", "B. Garner", "S. Patino", "B. Willey", "D. Falcon"
        };