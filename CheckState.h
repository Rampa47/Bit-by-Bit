/**
 * @class CheckState
 * @brief Represents the state of the table when the customers are not ready to order.
 */
#ifndef CHECKSTATE_H
#define CHECKSTATE_H

#include "TableState.h"


class CheckState: public TableState
{
    private:
        int current=0;
    public:
        CheckState(int c);
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};

#endif // OCCUPIEDTABLE_H