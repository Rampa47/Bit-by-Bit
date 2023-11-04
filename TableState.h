#ifndef TABLESTATE_H
#define TABLESTATE_H

#include <string>
#include "Table.h"      //context

class Table;
class TableState{
    public:
        virtual void handle(Table& table) = 0;
        virtual TableState* getNextState()=0;
        virtual std::string toString()=0;
    private:

};

#endif // TABLESTATE_H
