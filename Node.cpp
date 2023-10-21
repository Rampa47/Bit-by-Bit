#include "Node.h"

Node::Node()
{
    next = nullptr;
    value = 0;
}

Node::Node(double value)
{
    this->value = value;
    next = nullptr;
}

Node * Node::getNext()
{
    if(next == nullptr)
    {
        return nullptr;
    }
    else
    {
        return next;
    }
}

Node * Node::getPrev()
{
    if(prev == nullptr)
    {
        return nullptr;
    }
    else
    {
        return prev;
    }
}

void Node::setNext(Node * node)
{
    this->next = node;
}

void Node::setPrev(Node * node)
{
    if(node == nullptr)
    {
        return;
    }
    else
    {
        this->prev = node;
    }
}

void Node::setValue(double value)
{
    this->value = value;
}

double Node::getValue()
{
    return value;
}