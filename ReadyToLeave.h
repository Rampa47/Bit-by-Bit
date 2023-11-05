#ifndef READYTOLEAVE_HPP
#define READYTOLEAVE_HPP

#include "TableState.h"

<<<<<<< HEAD:ReadyToLeave.h
template <class T>
class ReadyToLeave: public TableState<T>
=======

class PaidBill: public TableState
>>>>>>> 7c67ec5bf4face698912889cb7daf7846397d467:PaidBill.h
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};


#endif // READYTOLEAVE_HPP
