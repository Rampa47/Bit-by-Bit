#include"Complaint.h"

Complaint::Complaint(ComplaintsHandler* handler,int degree)
{
   this->handler=handler;
   this->degree=degree;
}

Complaint::~Complaint()
{
}

void Complaint::setDegree(int degree)
{
   this->degree=degree;
}
