/**
 * @file OccupiedTable.h
 */

#ifndef OCCUPIEDTABLE_H
#define OCCUPIEDTABLE_H

#include "TableState.h"


class OccupiedTable: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};

#endif // OCCUPIEDTABLE_H
