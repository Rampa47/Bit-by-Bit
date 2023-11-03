#ifndef RECEIVEDORDER_H
#define RECEIVEDORDER_H

#include "TableState.h"

template <class T>
class ReceivedOrder: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};


#endif // RECEIVEDORDER_H


