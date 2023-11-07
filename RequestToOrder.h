/**
 * @class RequestToOrder
 * @brief Represents the state of the table when the customers are have requested to order.
 */
#ifndef REQUESTTOORDER_H
#define REQUESTTOORDER_H

#include "TableState.h"


class RequestToOrder: public TableState
{
    public:
        virtual void handle(Table& table);
        virtual TableState* getNextState();
        virtual std::string toString();
    
};


#endif // REQUESTTOORDER_H
