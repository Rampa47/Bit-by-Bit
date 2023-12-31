/**
 * @class EmptyTable
 * @brief Represents the state of the table when there are no customers at the table.
 */
#ifndef EMPTYTABLE_H
#define EMPTYTABLE_H

#include "TableState.h"


class EmptyTable: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};

#endif // EMPTYTABLE_H
