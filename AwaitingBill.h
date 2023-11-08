/**
 * @class AwaitingBill
 * @brief Represents the state of the table when the customers are waiting for the bill.
 */
#ifndef AWAITINGBILL_H
#define AWAITINGBILL_H

#include "TableState.h"


class AwaitingBill: public TableState{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
};

#endif // AWAITINGBILL_H
