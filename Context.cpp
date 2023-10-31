#include "Context.h"

Context::Context(Complaint* type)
{
    this->type=type;
}

Context::~Context()
{

}

void Context::AddressComplaint(string complaint, int degree)
{
    type->AddressComplaint(complaint,degree);
}