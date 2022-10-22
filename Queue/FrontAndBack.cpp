#include<iostream>
using namespace std;

#define n 5

struct Iam
{
    int *arr=new int[n];
    int front=-1;
    int rear=-1;

  
    
    bool IsEmpty()
    {
        if(front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool IsFull()
    {
        if(rear == n-1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
      
    void enqueue(int x)
    {
        if(IsFull())
        {
            cout<<"Over Flow..";
            return;
        }
        else if(IsEmpty())
        {
            front++;
            rear++;
            arr[rear]=x;
        }
        else
        {
            rear++;
        arr[rear]=x;
        }

    }

    int dequeue()
    {
        
        if(IsEmpty())
        {
            cout<<"Under FLow....";
            
        }
      else
        {
            int val=arr[front];
            front++;
            return val;
        }
    }
    
    void display()
    {
       int fr=front;
       while(fr<=rear){
        cout<<arr[fr]<<" ";
        fr++;
       }
    //    cout<<arr[fr]<<" ";
    }

};


int main()
{
    system("cls");
    Iam i;
    i.enqueue(1);
    i.enqueue(2);
    i.enqueue(3);
    i.enqueue(4);

    cout<<"Before Dequeue: ";
    i.display();
    cout<<endl;
    i.dequeue();
    i.dequeue();
    i.dequeue();
    
    cout<<"After Dequeue: ";
    i.display();

    return 0;
}