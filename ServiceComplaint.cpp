#include "ServiceComplaint.h"


ServiceComplaint::ServiceComplaint(ComplaintsHandler* handler,int degree): Complaint(handler,degree)
{
}

ServiceComplaint::~ServiceComplaint()
{
}

void ServiceComplaint::AddressComplaint()
{
    handler->handleComplaint(getname(),degree);
}

string ServiceComplaint::getname()
{
    return "Service";
}