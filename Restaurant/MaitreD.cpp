#include "MaitreD.h"

template <class T>
MaitreD<T> * MaitreD<T>::maitreD = nullptr;

template <class T>
MaitreD<T> * MaitreD<T>::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD<T>();
    }
     className="MaitreD";
    return maitreD;
}


template <class T>
void MaitreD<T>::seatCustomers(Restaurant<T>& list, std::vector<Customer*> vect)
{
    list.addCustomer(vect);
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