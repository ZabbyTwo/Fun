#include <iostream>
#include "linkedLists.h"

LinkedList::LinkedList()
{
    this->Head = nullptr;
}

LinkedList::~LinkedList()
{
    node *current = this->Head;
    while (current != nullptr)
    {
        node *nextNode = current->getNext();
        delete current;
        current = nextNode;
    }
    this->Head = nullptr;
}

void LinkedList::insert(int data)
{
    node *newNode = new node(data);

    if (this->Head == nullptr)
    {
        this->Head = newNode;
        return;
    }

    node *current = this->Head;
    while (current->getNext() != nullptr)
    {
        current = current->getNext();
    }
    current->setNext(newNode);
}

bool LinkedList::remove(int targetData)
{
    if (this->Head == nullptr)
        return false;

    if (this->Head->getData() == targetData)
    {
        node *toDelete = this->Head;
        this->Head = this->Head->getNext(); 
        delete toDelete;                
        return true;
    }

    node *current = this->Head;
    while (current->getNext() != nullptr)
    {
        if (current->getNext()->getData() == targetData)
        {
            node *toDelete = current->getNext();
            current->setNext(toDelete->getNext()); 
            delete toDelete;                       
            return true;
        }
        current = current->getNext();
    }

    return false; 
}

void LinkedList::listNodes() const
{
    node *current = this->Head;
    if (current == nullptr)
    {
        std::cout << "Liste ist leer.\n";
        return;
    }

    while (current != nullptr)
    {
        std::cout << "Data: " << current->getData()
                  << "\t[Next Address: " << current->getNext() << "]\n";
        current = current->getNext();
    }
}

node *LinkedList::getHead() const
{
    return this->Head;
}