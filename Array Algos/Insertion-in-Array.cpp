#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={1,2,4,5,6};
    int posi,n,i;

    cout<<"Before Insertion: ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }


    cout<<"\nAt which position you want to enter the number: ";
    cin>>posi;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=size; i>=posi; i--)
        arr[i] = arr[i-1];
        arr[i] = n;
        size++;
    
     cout<<"\nAfter Insertion: ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}