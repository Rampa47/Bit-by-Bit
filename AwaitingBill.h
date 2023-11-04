#ifndef AWAITINGBILL_H
#define AWAITINGBILL_H

#include "TableState.h"


class AwaitingBill: public TableState{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();

    private:

};

#endif // AWAITINGBILL_H