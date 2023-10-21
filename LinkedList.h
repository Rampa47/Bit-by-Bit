#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        void add(double value);
        void remove(double value);
        bool isEmpty();
        Node * getHead();
        ~LinkedList();

    private:
        Node * head;
};

#endif