#include<iostream>
using namespace std;

int main()
{
    const int n=5;
    int Data[n]={1,2,3,4,5};
    int Item;
    int lb=1,ub=n,mid=0;
    int k=0;
    
    cout<<"Enter the Item: ";
    cin>>Item;

    while(lb<=ub && Data[mid]!=Item)
    {
        

        if(Item<Data[mid])
        {
          ub = mid - 1;  
        }
        if(Item>Data[mid])
        {
            lb = mid + 1;
        }
        mid=((lb+ub)/2); 
    }
     
        if(Item==Data[mid])
        {
            cout<<"Item found after "<<mid<<" Searches.";
            
        }

   
return 0;
}