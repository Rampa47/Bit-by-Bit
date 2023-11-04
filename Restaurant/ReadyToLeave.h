#ifndef READYTOLEAVE_HPP
#define READYTOLEAVE_HPP

#include "TableState.h"

template <class T>
class ReadyToLeave: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};


#endif // READYTOLEAVE_HPP
