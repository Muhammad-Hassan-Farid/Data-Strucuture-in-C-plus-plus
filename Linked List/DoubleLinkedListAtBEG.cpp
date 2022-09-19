#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *first = NULL;

void insert(int x)
{
    Node *curr = new Node();
    curr->data = x;
    curr->next = first;
    curr->prev = NULL;

    if (first != NULL)
    {
        first->prev = curr;
    }
    first = curr;
}

void display()
{
    Node *curr = first;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    cout << "Output: ";
    display();
}