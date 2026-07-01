#pragma once

struct node {
    int data;
    node* next;
};

node createNode(int* data, node* next);

node addNode(node node, int* data);