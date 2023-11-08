#include "ComplaintsHandler.h"

ComplaintsHandler::ComplaintsHandler():next(nullptr)
{
}

ComplaintsHandler::~ComplaintsHandler()
{
}

void ComplaintsHandler::addNext(ComplaintsHandler* c)
{
    if(next==nullptr)
    {
        next=c;
    }
    else
    {
        next->addNext(c);
    }
}