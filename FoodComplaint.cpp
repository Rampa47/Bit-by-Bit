#include "FoodComplaint.h"

FoodComplaint::FoodComplaint(ComplaintsHandler* handler,int degree): Complaint(handler,degree)
{
}

FoodComplaint::~FoodComplaint()
{
}

void FoodComplaint::AddressComplaint()
{
    handler->handleComplaint(getname(),degree);
}

string FoodComplaint::getname()
{
    return "Food";
}