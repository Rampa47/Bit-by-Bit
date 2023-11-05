#ifndef FACADE_H
#define FACADE_H
#include "Restaurant.h"
#include "Waiter.h"
#include "MaitreD.h"
#include "PoultryChef.h"
#include "FryChef.h"
#include "BurgerChef.h"
#include "HeadChef.h"
#include "Customer.h"
#include "Table.h"
#include "Restaurant.h"
#include "Mediator.h"
#include "AllWaiters.h"
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;

class Facade{
    private:
        static std::array<std::string, 150> names;
        MaitreD* maitreD;
        queue<Customer*> customers;
        ChefHandler* orderhandler;
        vector<Waiter*> waiters;
        AllWaiters* allWaiters;
        Restaurant* restaurant;
        Mediator* mediator;

    public:
        Facade(int tables);
        void execute1();
        void execute2();
        ~Facade();

};



#endif