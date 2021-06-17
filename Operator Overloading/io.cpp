//overloadind of >> ans <<

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        int data = x;
        next = NULL; 
    }
};

void insertAtHead(node *head, int x)
{
    node *n = new node(x);
    n->next = head;
    head = n;
}

void insertAtTail(node *head, int x)
{
    node* n = new node(x);
}
