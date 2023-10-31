#include "ServiceComplaint.h"


ServiceComplaint::ServiceComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

ServiceComplaint::~ServiceComplaint()
{
}

void ServiceComplaint::AddressComplaint(string complaint,int degree)
{
    this->degree=degree;
    cout << "Service Complaint: " << complaint << endl;
    handler->handleComplaint("Service",degree);
}