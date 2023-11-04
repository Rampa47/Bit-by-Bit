#include "TimeComplaint.h"

TimeComplaint::TimeComplaint(ComplaintsHandler* handler,int degree): Complaint(handler,degree)
{
}

TimeComplaint::~TimeComplaint()
{
}

void TimeComplaint::AddressComplaint()
{
    cout << "Time Complaint: " << endl;
    //handler->handleComplaint();
}