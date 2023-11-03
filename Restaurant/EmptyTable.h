#ifndef EMPTYTABLE_H
#define EMPTYTABLE_H

#include "TableState.h"

template <class T>
class EmptyTable: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};

#endif // EMPTYTABLE_H
