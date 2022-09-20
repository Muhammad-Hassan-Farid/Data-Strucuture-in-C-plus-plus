#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *first;
Node *last;
void InsertAtEnd(int x)
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

void InserAtSpecificLoc(int n, int loc)
{
    Node *temp=first;
    Node *prev1;
    while(temp!=NULL)
    {
        if(loc==temp->data)
        {
            Node *curr= new Node();
            curr->data=n;
            curr->next=temp;
            curr->prev=prev1;
            prev1->next=curr;
            

        }
        prev1=temp;
        temp=temp->next;
    }
}

void delet(int y)
{
    
    Node *temp=first;
    Node *prev1;

    while(first!=NULL)
    {
        if(y==temp->data)
        {
            Node *del=temp;
            prev1->next=temp->next;
            temp->prev=prev1;
            delete del;
            break;
        }
        prev1 = temp;
        temp = temp->next;
    }

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
    system("cls");
    int item;
    int DeleteItem;
    int loc;
    
    cout<<"\nEnter the Item or press Zero to Exit : ";
    cin>>item;
    while(item!=0)
    {
    InsertAtEnd(item);
    cout<<"\nEnter the Item or press Zero to Exit : ";
    cin>>item;
    }

    display();
    cout<<"\n\nEnter the item at specific Location: ";

    cout<<"\nEnter the location of inserting value: ";
    cin>>loc;
    cout<<"\nEnter the item: ";
    cin>>item;
    InserAtSpecificLoc(item,loc);
    display();


    cout<<"\nEnter the value for Deleton: ";
    cin>>DeleteItem;
    delet(DeleteItem);
    cout<<"\n After deletion: ";
    display();
}