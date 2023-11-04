#ifndef REQUESTTOORDER_H
#define REQUESTTOORDER_H

#include "TableState.h"

template <class T>
class RequestToOrder: public TableState<T>
{
    public:
        virtual void handle(Table<T>& table);
        virtual TableState<T>* getNextState();
        virtual std::string toString();
    
};


#endif // REQUESTTOORDER_H
