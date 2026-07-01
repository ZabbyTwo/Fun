#include <iostream>

struct node {
    int data;
    node* next;
};

int main(){
    node newNode1;
    node newNode2;

    newNode1.data = 123;
    newNode1.next = &newNode2;

    std::cout << newNode1.data << " " << newNode1.next << "\n";

    return 0;
}