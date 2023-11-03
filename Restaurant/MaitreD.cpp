#include "MaitreD.h"

template <class T>
MaitreD<T> * MaitreD<T>::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
    }
     className="MaitreD";
    return maitreD;
}


template <class T>
void MaitreD<T>::seatCustomers(Restaurant<T>& list, Customer& diner)
{
    list.addCustomer(diner);
}

template <class T>
MaitreD<T>::~MaitreD()
{
    if(maitreD != nullptr)
    {
        delete maitreD;
    }

    maitreD = nullptr;
}


