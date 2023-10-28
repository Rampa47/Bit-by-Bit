#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include "Colleague.h"
class Customer: public Colleague
{
    public:
        Customer();
        Customer(std::string name);
        std::string getName();
         void receive(std::string to,std::string message);
         void send(std::string to,std::string message);

    private:
        std::string name;
};

#endif