#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first = NULL;
Node *last = NULL;

void insert(int x)
{
    if (first == NULL && last == NULL)
    {
        Node *curr = new Node();
        curr->data = x;
        curr->next = curr;
        first = curr;
        last = curr;
    }
    else
    {
        Node *curr = new Node();
        curr->data = x;
        curr->next = first;
        last->next = curr;
        last=curr;
    }
}
void display()
{
    Node *curr = first;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    while (curr != first);
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display();
}
