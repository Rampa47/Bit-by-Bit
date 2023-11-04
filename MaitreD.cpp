#include "MaitreD.h"

MaitreD * MaitreD::maitreD = nullptr;

MaitreD * MaitreD::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
    }

    return maitreD;
}

void MaitreD::seatCustomers(Restaurant& list, std::vector<Customer*> vect)
{
    list.addCustomer(vect);
}

MaitreD::~MaitreD()
{
    if(maitreD != nullptr)
    {
        delete maitreD;
    }

    maitreD = nullptr;
}

MaitreD::MaitreD(){}
