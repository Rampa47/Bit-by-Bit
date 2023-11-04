#ifndef PAIDBILL_H
#define PAIDBILL_H

#include "TableState.h"


class PaidBill: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};


#endif // PAIDBILL_H
