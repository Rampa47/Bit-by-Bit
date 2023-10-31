#include "TimeComplaint.h"

TimeComplaint::TimeComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

TimeComplaint::~TimeComplaint()
{
}

void TimeComplaint::AddressComplaint(string complaint,int degree)
{
    this->degree=degree;
    cout << "Time Complaint: " << complaint << endl;
    handler->handleComplaint("Time",degree);
}