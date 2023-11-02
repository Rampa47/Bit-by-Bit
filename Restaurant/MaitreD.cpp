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
template <class T>
void MaitreD<T>::receive(std::string to,std::string message,Colleague* me){
    std::cout<<"Maitre D you have a notification: " << message <<std::endl;
 }
 template <class T>
 void  MaitreD<T>::send(){
    std::string message="";
      std::string to="";
    std::cout<<"Maitre D who would you like to Notify?"<<std::endl;
    std::cin>>to;
    std::cout<<"Maitre D what is your message to the receiver?"<<std::endl;
    std::cin>>message;

    mediator->notifications(to,message,this);
 }
 template <class T>
std::string MaitreD<T>::getClassname(){
    return "MaitreD";
}
