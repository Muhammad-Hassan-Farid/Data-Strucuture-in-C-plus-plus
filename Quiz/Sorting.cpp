#include<iostream>
using namespace std;

int Partition(int arr[], int s, int e)
{
    int pivot=arr[e];
    int pIndex=s;

    for(int i=s; i<e; i++)
    {
        if(arr[i]<pivot)
        {
            int temp=arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;

        }

    }
    int temp=arr[e];
    arr[e]=arr[pIndex];
    arr[pIndex]=temp;

    return pIndex;

}


void QuickSort(int arr[], int s, int e )
{
    if(s<e)
    {
        int p=Partition(arr,s,e);
        QuickSort(arr,s,(p-1));
        QuickSort(arr,(p+1),e);
    }

}

int main()
{
    const int size =6;
    int arr[size]={3,8,6,7,5,9};
    
    cout<<"\nBefore Sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    QuickSort(arr, 0, (size-1));
    cout<<"\nAfter Sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}