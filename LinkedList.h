#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"

template <class T>
class LinkedList
{
    public:
        LinkedList();
        Node<T> * add();
        void remove(T value);
        bool isEmptyList();
        void addCustomer(Customer& value);
        Node<T> * getHead();
        std::string printCustomers();
        void createList();
        ~LinkedList();

    private:
        Node<T> * head;
};

#endif