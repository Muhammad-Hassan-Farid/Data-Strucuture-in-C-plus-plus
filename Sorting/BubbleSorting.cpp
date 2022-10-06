#include<iostream>
using namespace std;

int main()
{
        int arr[6]={2,3,5,7,9,1};

    cout<<"Unsorted : ";
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<"  ";
    }

    int counter=1;

    while(counter<6)
    {
        for(int i=0; i<6; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;      
            }

        }
        counter ++;
    }
    cout<<"\n Sorted: ";
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}