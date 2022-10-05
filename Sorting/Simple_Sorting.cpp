#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"\n Enter the "<<size<< " Numbers: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<i <<" Number: ";
        cin>>arr[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    
    cout<<"After Sorting in Acceding Order: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<i<<" Number : "<<arr[i]<<endl;
    }
    return 0;
}