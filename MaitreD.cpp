#include "MaitreD.h"
#include "ThreadSleep.h"


MaitreD * MaitreD::maitreD = nullptr;

MaitreD * MaitreD::instance()
{
    if(maitreD == nullptr)
    {
        maitreD = new MaitreD();
    }

    return maitreD;
}

Table* MaitreD::seatCustomers(Restaurant& list, std::vector<Customer*> vect)
{
    std::cout<<"MaitreD assigns customers to a table..."<<std::endl;
    Table* table= list.addCustomer(vect);
    ThreadSleep::threadSleep();
    if (!table->getTableType()){
        std::cout << "Customers on table "<<to_string(table->getTableNumber())<<" are seated...\n";
        return table;
    }
    return NULL;

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
