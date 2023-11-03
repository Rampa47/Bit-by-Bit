#ifndef WAITER_H
#define WAITER_H
#include "Table.h"
#include "Restaurant.h"

template <class T>
class Waiter
{
    public:
        Waiter();
        void takeOrder();
        void handleComplaint();
        

    private:
        Table<T> * assignedTable;
        Restaurant<T> 
};

#endif