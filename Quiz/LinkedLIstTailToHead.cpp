#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node *next;
    Node *prev;
   
};

Node *first;
Node *last;

void insert(int x)
{
    if (first == NULL && last == NULL)
    {
        Node *curr = new Node();
        curr->data = x;
        curr->next = NULL;
        curr->prev = NULL;
        first = curr;
        last = curr;
    }
    else
    {
        Node *curr = new Node();
        curr->data = x;
        curr->next = NULL;
        curr->prev = last;
        last->next = curr;
        last = curr;
    }
}

void display()
{
    Node *curr = last;
    while (curr != first)
    {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout<<curr->data;
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