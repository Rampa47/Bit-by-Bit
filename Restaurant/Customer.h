#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
    public:
        Customer();
        Customer(std::string name);
        std::string getName();

    private:
        std::string name;
};

#endif