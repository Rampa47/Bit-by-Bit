//
// Created by zethe on 2023/10/18.
//

#include "Mediator.h"
void Mediator::notify(Fooditem* preparedFood,Colleague* colleague,std::string to,std::string message){


    for (Colleague* colleague : Colleagues) {
        if (colleague->getname() == to) {
            colleague->receive(preparedFood, colleague, to, message);

        }
    }

}

void Mediator::registerme(Colleague* c){
    Colleagues.push_back(c);
}