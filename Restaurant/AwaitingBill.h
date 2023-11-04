#ifndef AWAITINGBILL_H
#define AWAITINGBILL_H

#include "TableState.h"

template <class T>
class AwaitingBill: public TableState<T>{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
};

#endif // AWAITINGBILL_H
