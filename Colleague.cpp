#include "Colleague.h"




 Colleague::~Colleague(){
        mediator=nullptr;
}

void Colleague::reg(Mediator* m){
    mediator = m;
    m->registerMe(this);

}

