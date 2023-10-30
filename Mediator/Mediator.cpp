#include "Mediator.h"
#include <iostream>
using namespace std;

Mediator::~Mediator(){
    Colleague.clear();
}
void Mediator::notifications(std::string to,std::string message){
 for (Colleague* colleague : Colleagues) {
        if (colleague->getClassname() == to) {
          colleague->receive( to, message);
        }
}
}
void Mediator::registerMe(Colleague* c){
    Colleague.push_back(c);
}