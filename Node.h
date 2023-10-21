#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node
{
    public:
        Node();
        Node(double value);
        Node * getNext();
        Node * getPrev();
        void setNext(Node * node);
        void setPrev(Node * node);
        void setValue(double value);
        double getValue();

    private:
        Node * next;
        Node * prev;
        double value;
};

#endif