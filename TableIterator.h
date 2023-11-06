#ifndef TABLE_ITERATOR_H
#define TABLE_ITERATOR_H
#include "Table.h"

class TableIterator
{
    public:
        TableIterator(Table* table);
        Table* first();
        void next();
        Table* current();
        bool hasNext();
        virtual ~TableIterator();
    
    private:
        Table* firstTable;
        Table* currentTable;
};

#endif // TABLEITERATOR_H

