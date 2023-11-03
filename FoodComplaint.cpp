#include "FoodComplaint.h"

FoodComplaint::FoodComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

FoodComplaint::~FoodComplaint()
{
}

void FoodComplaint::AddressComplaint(string complaint)
{
    cout << "Food Complaint: " <<  complaint << endl;
    handler->handleComplaint();
}
