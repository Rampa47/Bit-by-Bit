#ifndef TABLESTATE_H
#define TABLESTATE_H

#include <string>
#include "Table.h"      //context

template <class T>
class TableState{
    public:
        virtual void handle(Table<T>& table) = 0;
        virtual TableState* getNextState()=0;
        virtual std::string toString()=0;
    private:

};

#endif // TABLESTATE_H
