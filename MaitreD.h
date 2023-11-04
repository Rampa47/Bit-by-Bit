#ifndef MAITRED_H
#define MAITRED_H
#include "Table.h"
#include "Restaurant.h"
#include "Customer.h"
#include "ComplaintsHandler.h"

template <class T>
class MaitreD:public ComplaintsHandler
{
    public:
        static MaitreD<T> * instance();
        void seatCustomers(Restaurant<T>& list, std::vector<Customer*> vect);
        void handleComplaint(std::string complaint, int degree);
        ~MaitreD();

    protected:
        MaitreD();
        MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
    
    private:
        //static int uniqueInstance;
        static MaitreD<T> * maitreD;
};

#endif