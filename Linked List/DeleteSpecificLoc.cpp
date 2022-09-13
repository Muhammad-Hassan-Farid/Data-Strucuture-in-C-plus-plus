#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *start=NULL;


void insert(int x)
{
    Node *newnode=new Node();
    newnode->data=x;
    newnode->next=start;
    start=newnode;
}

void delet(int loc)
{
    Node *temp=start;
    Node *prev;
    while(temp!=NULL)
    {
    if(temp->data==loc)
    {
        Node *del=temp;
        prev->next=temp->next;
        delete del;
        break;
        
    }
    prev=temp;
    temp=temp->next;
        
    }
}

void display()
{
    Node* curr=start;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    system("cls");
    int item;
    int loc;
    cout<<"\nEnter the item: ";
    cin>>item;
    while(item!=0)
    {
        insert(item);
        cout<<"\nEnter the item: ";
        cin>>item;
        
    }
    cout<<"\n Before: ";
    display();
    
    cout<<"\nEnter the Loc: ";
    cin>>loc;
    delet(loc);
    cout<<"\nAfter Deleting: ";
    display();



}