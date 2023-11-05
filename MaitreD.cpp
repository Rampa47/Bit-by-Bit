#include "MaitreD.h"
#include <cstdlib>

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
    std::cout<<"MaitreD assigns customers to a table..."<<std::endl;
    Table* table= list.addCustomer(vect);
    if (!table->getTableType()){
        table->setState();
        table->getState()->handle(*table);
        srand((unsigned) time(NULL));
	    int iterations = rand()%3+1;
        for (int i=0; i<iterations; i++){
            table->getWaiter()->checkOnTable();
        }
        table->setState();
        table->getState()->handle(*table);
        table->setState();
        table->getState()->handle(*table);

    }

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
