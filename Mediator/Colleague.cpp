#include "Colleague.h"




virtual Colleague::~Colleague(){
        mediator=nullptr;
}

void Colleague::reg(Mediator* m){
    mediator = m;
    m->registerme(this);

}
std::string Colleague::getClassname(){
    return Classname;
}
