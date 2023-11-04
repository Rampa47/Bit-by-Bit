#include "ServiceComplaint.h"


ServiceComplaint::ServiceComplaint(ComplaintsHandler* handler,int degree): Complaint(handler,degree)
{
}

ServiceComplaint::~ServiceComplaint()
{
}

void ServiceComplaint::AddressComplaint()
{
    cout << "Service Complaint: " << endl;
    //handler->handleComplaint();
}