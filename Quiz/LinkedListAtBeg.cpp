#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first;


void insert(int x)
{
    Node *newnode = new Node();
    newnode->data=x;
    newnode->next=first;
    first=newnode;

}

void display()
{
    while(first!=NULL)
    {
        cout<<first->data<<" ";
        first=first->next;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    display();

    return 0;
}