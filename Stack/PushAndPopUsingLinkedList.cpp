#include<iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;


};

stack *top;

void push(int x)
{
    stack *node=new stack();
    node->data=x;
    node->next=top;
    top=node;
}

void pop()
{
    stack *temp=top;
    if(top==NULL)
    {
        cout<<"UnderFlow....."<<endl;
    }
    else
    {
        top=top->next;
        free(temp);
    }
}
void display()
{
    stack *curr=top;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout<<"Before chages: ";
    display();
    
    pop();
    pop();
    cout<<"\nAfter changes: ";
    display();
    return 0;
}