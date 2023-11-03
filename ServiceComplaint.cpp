#include "ServiceComplaint.h"


ServiceComplaint::ServiceComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

ServiceComplaint::~ServiceComplaint()
{
}

void ServiceComplaint::AddressComplaint(string complaint)
{
    cout << "Service Complaint: " << complaint << endl;
    handler->handleComplaint();
}