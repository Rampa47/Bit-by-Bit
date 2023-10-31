#include"Complaint.h"

Complaint::Complaint(ComplaintsHandler* handler)
{
    this->handler=handler;
}

Complaint::~Complaint()
{
}

void Complaint::setDegree(int degree)
{
    this->degree=degree; //degree of complaint
}