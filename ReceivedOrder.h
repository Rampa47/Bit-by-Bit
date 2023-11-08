/**
 * @class ReceivedOrder
 * @brief Represents the state of the table when the customers have received their ready meal from their waiter.
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


