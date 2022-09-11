#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

};
Node *start=NULL;
Node *last=NULL;

void insert(int x)
{
    Node *newnode=new Node();
    if(start==NULL && last==NULL)
    {
     newnode->data=x;
     newnode->next=NULL;
     start=newnode;
     last=newnode;

    }
    else
    {
        Node *curr=new Node();
        curr->data=x;
        curr->next=NULL;
        last->next=curr;
        last=curr;

    }
    
    
}

void delet()
{
    Node *temp=start;
    start=start->next;
    delete temp;
}

void display()
{
    Node *temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    system("cls");
    int item;
    cout<<"Enter the item: ";
    cin>>item;

    while(item!=0)
    {
        insert(item);
        cout<<"Enter the item: ";
        cin>>item;
    }
    cout<<"\n Before: ";
    display();
    cout<<"\n After: ";
    delet();
    display();

}