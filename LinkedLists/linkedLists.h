#pragma once

struct node
{
private:
    int Data;
    node *Next;

public:
    node(int data)
    {
        this->Data = data;
        this->Next = nullptr;
    }

    int getData() const
    {
        return this->Data;
    }
    node *getNext() const
    {
        return this->Next;
    }
    void setNext(node *next)
    {
        this->Next = next;
    }
};

class LinkedList
{
private:
    node *Head;

public:
    LinkedList();  
    ~LinkedList();

    void insert(int data);
    bool remove(int targetData);
    void listNodes() const;
    node *getHead() const;
};