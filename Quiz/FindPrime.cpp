#include<iostream>
using namespace std;

int main()
{
    int num,flag=0,j=2;  //Initialize variables 
    cout<<"Enter the Number: ";  //Enter from user
    cin>>num;

    if(num<=1)
    {
        cout<<num<<" is not a prime number.\n";
        return 0;
        
    }
    while(j<(num/2)+1) //step 5
    {
        if(num%j==0) //step 5.1
        {
            flag=0; //step 5.2
            
        }
        j++;
    }
    if(flag==0)     //step 6
    {
        cout<<num<<" is not a prime number.";
        
    }
    else
    {
        cout<<num<<" is a prime number.";
    }

    return 0;
}