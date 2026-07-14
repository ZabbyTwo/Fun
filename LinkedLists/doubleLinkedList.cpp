#include <iostream>

struct node
{
    int data;
    node *next;
    node *prev;

    node(int data) : data(data)
    {
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main()
{
    node *current;

    node head(1);
    node node1(2);
    node tail(3);

    head.next = &node1;
    node1.next = &tail;

    node1.prev = &head;
    tail.prev = &node1;

    std::cout << "With next" << '\n';
    current = &head;
    while (current != nullptr)
    {
        std::cout << current->data << '\n';
        current = current->next;
    }

    std::cout << "With prev" << '\n';
    current = &tail;
    while (current != nullptr)
    {
        std::cout << current->data << '\n';
        current = current->prev;
    }
    return 0;
}