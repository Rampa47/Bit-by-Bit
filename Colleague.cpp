#include "Colleague.h"




virtual Colleague::~Colleague(){
        mediator=nullptr;
}

void Colleague::reg(Mediator* m){
    mediator = m;
    m->registerMe(this);

}
std::string Colleague::getClassname(){
    return className;
}
