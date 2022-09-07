#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};

Node *start=NULL;

void Insertion(int x)
{
    Node *newnode= new Node;
    newnode->data=x;
    newnode->next=start;
    start=newnode;
}
void display()
{
    Node *First=start;
    while(First!=NULL)
    {
       cout<<First->data<<" ";
       First=First->next;
    }
}

int main()
{
    system("cls");

    int counter=0;
    int item;
    
    cout<<"Enter the Item or press zero to exit: ";
    cin>>item;
    while(item!=0)
    {
    Insertion(item);
    counter++;
    cout<<"Enter the Item or press zero to exit: ";
    cin>>item;
    }
    display();
    cout<<"\nTotal Node: "<<counter<<endl;

    return 0;
}