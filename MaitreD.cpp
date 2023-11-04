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

template <class T>
MaitreD<T>::MaitreD(){}

template <class T>
void MaitreD<T>::handleComplaint(string c, int degree)
{
    if (degree<3&&c.compare("Food")==0)
    {
        cout<<"We're sorry that your meal didn't live up to your taste preferences."<<endl;
        cout<<"We would be happy to make you a fresh dish right away."<<endl;
    }
    
}