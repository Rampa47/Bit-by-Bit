#ifndef MAITRE_D_H
#define MAITRE_D_H
#include "Table.h"
#include "Restaurant.h"
#include "Customer.h"
#include "Colleague.h"

template <class T>
class MaitreD :public Colleague
{
    public:
        static MaitreD * instance();
        void seatCustomers(Restaurant<T>& list, Customer& diner);
        void handleComplaint(std::string complaint);
        Restaurant<T> * getRestaurant();
        ~MaitreD();
   
       

    protected:
        MaitreD();
        MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
    
    private:
        //static int uniqueInstance;
        static MaitreD * maitreD;
};

#endif