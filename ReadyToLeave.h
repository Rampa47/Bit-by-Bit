#ifndef READYTOLEAVE_HPP
#define READYTOLEAVE_HPP

#include "TableState.h"

class ReadyToLeave: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};


#endif // READYTOLEAVE_HPP
