#include "Customer.h"

Customer::Customer()
{
    name = "";
}

Customer::Customer(std::string name)
{
    this->name = name;
}

std::string Customer::getName()
{
    return name;
}