//
// Created by zethe on 2023/10/18.
//

#ifndef INC_214_PROJECT_CUSTOMER_H
#define INC_214_PROJECT_CUSTOMER_H
#include "Colleague.h"

class Customer: public Colleague {
public:
    Customer();
    std::string getname();
    void send(std::string to);
    std::string name;
};


#endif //INC_214_PROJECT_CUSTOMER_H
