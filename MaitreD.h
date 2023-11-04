#ifndef MAITRED_H
#define MAITRED_H
#include "Table.h"
#include "Restaurant.h"
#include "Customer.h"
#include "TableIterator.h"

class MaitreD
{
    public:
        static MaitreD * instance();
        void seatCustomers(Restaurant& list, std::vector<Customer*> vect);
       // void handleComplaint(std::string complaint);
        ~MaitreD();

    protected:
        MaitreD();
        //MaitreD(MaitreD&);
        MaitreD & operator=(const MaitreD&);
    
    private:
        //static int uniqueInstance;
        static MaitreD * maitreD;
};

#endif