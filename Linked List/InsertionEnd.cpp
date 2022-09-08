#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *start=NULL;
Node *last=NULL;

void Insertion(int x)
{
    
    if(start==NULL && last==NULL) 
    {
        Node *temp= new Node();
        temp->data=x;
        temp->next=NULL;
        start=temp;
        last=temp;
    }
    else
    {
        Node *curr= new Node();
        curr->data=x;
        curr->next=NULL;
        last->next=curr;
        last=curr;
    }  

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
    cout<<"Enter the Item or press zero to exit: ";
    cin>>item;
    
    while(item!=0)
    {
        Insertion(item);
        
        cout<<"Enter the Item or press zero to exit: ";
        cin>>item;
    }
    display();


}