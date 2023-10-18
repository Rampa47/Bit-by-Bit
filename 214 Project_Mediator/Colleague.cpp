//
// Created by zethe on 2023/10/18.
//

#include "Colleague.h"
virtual void Colleague::receive(Fooditem* preparedfood,Colleague* colleague,std::string to,std::string message){

}
virtual void Colleague::sendMessage() {

}
void Colleague::reg(Mediator* med){
m=med;
m->registerme(this);
}