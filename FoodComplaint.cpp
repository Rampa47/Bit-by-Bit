#include "FoodComplaint.h"

FoodComplaint::FoodComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

FoodComplaint::~FoodComplaint()
{
}

void FoodComplaint::AddressComplaint(string complaint,int degree)
{
    this->degree=degree;
    cout << "Food Complaint: " <<  complaint << endl;
    handler->handleComplaint("Food",degree);
}
