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

void delet()
{
    Node *temp=start;
    start=start->next;
    delete temp;
    
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
    
    delet();
    cout<<"\nAfter Deleting: ";
    display();



}