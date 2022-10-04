#include<iostream>
#include<stack>
using namespace std ;

stack<char> obj;

void reversernumber(string a)
{

    for(int i=0;i<a.length();i++)
    {
        obj.push(a[i]);
    }

    while(!obj.empty())
    {
        cout<<obj.top();
        obj.pop();
    }

    cout<<endl;


}


int main(){
system("cls");
string s1="Muhammad Hassan Farid ";
cout<<"Before Reverse: "<<s1<<endl;

cout<<"After Reverse: "<<endl;
reversernumber(s1);


}