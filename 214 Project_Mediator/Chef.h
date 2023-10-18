//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_CHEF_H
#define INC_214_PROJECT_CHEF_H
#include "Colleague.h"

class Chef : public Colleague{
public:
    void receive(Fooditem* preparedfood,Colleague* colleague, std::string to,std::string message);
    std::string getname();
    std::string name;
    void send(std::string to);
    Chef();
};


#endif //INC_214_PROJECT_CHEF_H
