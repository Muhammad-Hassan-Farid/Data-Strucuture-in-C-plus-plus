#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

};
Node* start=NULL;
Node* last=NULL;


int insertion(int x)
{
   
   if(start==NULL && last==NULL)
   {
        Node* curr = new Node();
        curr->data=x;
        curr->next=NULL;
        start=curr;
        last=curr;
   }
   else
   {
       Node* curr = new Node();
       curr->data=x;
       curr->next=NULL;
       last->next=curr;
       last=curr;
   }
}

void InsertAtSpecificLoc(int n, int loc)
{
    Node *temp=start;
    Node *prev;
    while(temp!=NULL)
    {
        if(temp->data==loc)
        {
                Node* curr= new Node();
                curr->data=n;
                curr->next=temp;
    
                prev->next=curr;
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
    int item,loc,n;
    cout<<"Enter the item: ";
    cin>>item;
    while(item!=0)
    {
        insertion(item);
        cout<<"Enter the item: ";
        cin>>item;
        
    }
    cout<<"Before :";
    display();
    cout<<endl;

    cout<<"At which location do you want to enter the data: ";
    cin>>loc;
    cout<<"Enter the item : ";
    cin>>n;
    
    InsertAtSpecificLoc(n,loc);
    cout<<"After: ";
    display();

}