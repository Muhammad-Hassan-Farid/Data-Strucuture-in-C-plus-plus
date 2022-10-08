#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={3,5,6,7,10};
    int find;
    int count=0;

    cout<<"Enter the Number to Find: ";
    cin>>find;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==find)
        {
            cout<<"The Number is Found!";
            count=count+1;
        }
    }
    if(count==0)
    {
        cout<<"Not Found!";
    }
    
    return 0;

}