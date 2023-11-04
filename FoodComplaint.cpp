#include "FoodComplaint.h"

FoodComplaint::FoodComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}

FoodComplaint::~FoodComplaint()
{
}
 FoodComplaint::FoodComplaint(ComplaintsHandler* handler,int degree){}

void FoodComplaint::AddressComplaint(string complaint,int degree)
{
    
    this->degree=degree;
    cout << "Food Complaint: " <<  complaint << endl;
    handler->handleComplaint("Food",degree);
}
