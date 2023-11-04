#include "FoodComplaint.h"

FoodComplaint::FoodComplaint(ComplaintsHandler* handler): Complaint(handler)
{
}
FoodComplaint::FoodComplaint(ComplaintsHandler* handler,int degree)
{

}

FoodComplaint::~FoodComplaint()
{
}
 //FoodComplaint::FoodComplaint(ComplaintsHandler* handler,int degree){}

void FoodComplaint::AddressComplaint(string complaint,int degree)
{
    
    this->degree=degree;
    std::cout << "Food Complaint: " <<  complaint << std::endl;
    handler->handleComplaint("Food",degree);
}
