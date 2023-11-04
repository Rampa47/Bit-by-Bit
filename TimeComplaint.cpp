#include "TimeComplaint.h"

TimeComplaint::TimeComplaint(ComplaintsHandler* handler,int degree): Complaint(handler,degree)
{
}

TimeComplaint::~TimeComplaint()
{
}

void TimeComplaint::AddressComplaint()
{
    handler->handleComplaint("Time",degree);
}