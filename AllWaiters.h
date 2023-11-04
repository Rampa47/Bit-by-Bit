#ifndef ALLWAITER_H
#define ALLWAITER_H
#include "ComplaintsHandler.h"
#include "Waiter.h"
#include <vector>

using namespace std;
class AllWaiters:public ComplaintsHandler
{
    private:
       vector<Waiter*> allwaiters;
    public:
        AllWaiters();
        ~AllWaiters();
        void handleComplaint(string c, int degree);
        void addwaiter(Waiter* w);

    };

#endif