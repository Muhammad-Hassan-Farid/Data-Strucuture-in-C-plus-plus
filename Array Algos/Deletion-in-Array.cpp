#include<iostream>
using namespace std;

int main()
{
    system("cls");
    const int n=5;
    int arr[n]={12,27,23,44,24}; 
    int key;

    for(int i=0; i<n; i++)
    {
        cout<<"The value at "<<i<<" is: "<<arr[i]<<endl;
    }
    
    cout<<"Which index you want to delete a number: ";
    cin>>key;
    
    for(int i=key; i<n; i++)
    {
       arr[i]=arr[i+1]; 
       
    }
    
    for(int i=0; i<n-1; i++)
    {
        cout<<"The value at "<<i<<" is: "<<arr[i]<<endl;
    }


    return 0;
}