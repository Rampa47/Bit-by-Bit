/**
 * @file ReceivedOrder.h
 */
#ifndef RECEIVEDORDER_H
#define RECEIVEDORDER_H

#include "TableState.h"


class ReceivedOrder: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};


#endif // RECEIVEDORDER_H


