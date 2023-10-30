#ifndef TABLEITERATOR_H
#define TABLEITERATOR_H

#include "Table.h"

template <class T>
class TableIterator{

    public:
        TableIterator(Table<T>* table);
        Table<T>* first();
        void next();
        Table<T>* current();
        bool hasNext();
    
    private:
        Table<T>* firstTable;
        Table<T>* currentTable;

};

#endif // TABLEITERATOR_H

