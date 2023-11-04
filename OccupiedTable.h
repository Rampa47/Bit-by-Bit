#ifndef OCCUPIEDTABLE_H
#define OCCUPIEDTABLE_H

#include "TableState.h"

template <class T>
class OccupiedTable: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};

#endif // OCCUPIEDTABLE_H
