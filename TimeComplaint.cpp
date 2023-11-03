#include "TimeComplaint.h"

TimeComplaint::TimeComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

TimeComplaint::~TimeComplaint()
{
}

void TimeComplaint::AddressComplaint(string complaint)
{
    cout << "Time Complaint: " << complaint << endl;
    handler->handleComplaint();
}