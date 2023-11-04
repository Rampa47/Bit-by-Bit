#ifndef PAIDBILL_H
#define PAIDBILL_H

#include "TableState.h"

template <class T>
class PaidBill: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};


#endif // PAIDBILL_H
