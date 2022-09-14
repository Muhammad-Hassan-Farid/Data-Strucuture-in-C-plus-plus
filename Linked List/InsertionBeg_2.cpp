#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *start=NULL;

void insertion(int x)
{
    Node *temp= new Node;
    temp->data=x;
    temp->next=start;
    start=temp;
}

void display()
{
    while(start!=NULL)
    {
        cout<<start->data<<" ";
        start=start->next;
    }

}

int main()
{
    int item;
    cout<<"Enter the item or press zero to exit: ";
    cin>>item;
    while(item!=0)
    {
        insertion(item);
        cout<<"Enter the item or press zero to exit: ";
        cin>>item;
    }
    display();

}