#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::add(double value)
{
    Node * node = new Node(value);

    if(head == nullptr)
    {
        head = node;
        node->setPrev(nullptr);
        node->setNext(nullptr);
    }
    else
    {
        Node * nodePtr = head;

        while(nodePtr->getNext() != nullptr)
        {
            nodePtr = nodePtr->getNext();
        }

        nodePtr->setNext(node);
        node->setPrev(nodePtr);
        node->setNext(nullptr);
    }
}

void LinkedList::remove(double value)
{
    if(head == nullptr)
    {
        return;
    }
    else
    {
        Node * nodePtr = head;

        while(nodePtr->getNext() != nullptr && nodePtr->getValue() != value)
        {
            nodePtr = nodePtr->getNext();
        }

        if(head->getValue() == value)
        {
            head = head->getNext();
            nodePtr->setNext(nullptr);
            head->setPrev(nullptr);

            delete nodePtr;
            nodePtr = nullptr;
        }
        else if(nodePtr->getNext() != nullptr && nodePtr->getValue() == value)
        {
            nodePtr->getPrev()->setNext(nodePtr->getNext());
            nodePtr->getNext()->setPrev(nodePtr->getPrev());
            delete nodePtr;
            nodePtr = nullptr;
        }
        else if(nodePtr->getNext() == nullptr && nodePtr->getValue() == value)
        {
            std::cout << "Do we get here ?" << std::endl;
            std::cout << "NodePtr previous is " << nodePtr->getPrev()->getValue() << std::endl;
            std::cout << "Nodeptr is " << nodePtr->getValue() << std::endl;

            nodePtr->getPrev()->setNext(nullptr);
            nodePtr->setPrev(nullptr);

            std::cout << "Now, the value of nodePtr is " << nodePtr->getValue() << std::endl;
            delete nodePtr;
            nodePtr = nullptr;
            std::cout << "We have deleted the tail from the list" << std::endl;   
        }
    }
}

bool LinkedList::isEmpty()
{
    if(head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

LinkedList::~LinkedList()
{
    if(isEmpty())
    {
        return;
    }
    else
    {
        Node * ptr = head, * deletePtr = nullptr;

        while(ptr->getNext() != nullptr)
        {
            deletePtr = ptr;
            ptr = ptr->getNext();
            delete deletePtr;
        }

        head = nullptr;
        deletePtr = nullptr;
    }
}

Node * LinkedList::getHead()
{
    if(this->isEmpty())
    {
        return nullptr;
    }
    else
    {
        return head;
    }
}