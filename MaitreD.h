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
        Table* seatCustomers(Restaurant& list, std::vector<Customer*> vect);
        void checkingOnTable(Restaurant* restaurant);

    protected:
        MaitreD();
        ~MaitreD();
        MaitreD(MaitreD&){}
        MaitreD & operator=(const MaitreD&){return *this;}
        
    
    private:
        //static int uniqueInstance;
        static MaitreD * maitreD;
};

#endif