#include <iostream>
#include <stack>
using namespace std;

void Reversevariable(string val)
{
    stack<char> store ;
    int i = 0;
    while (i < val.length())
    {
        store.push(val[i]);
        i++;
    }

    while (!store.empty())
    {
        cout << store.top();
        store.pop();
    }
    cout << endl;
}

int main()
{
    system("cls");
    
    string val = " Hamdard University Islamabad ";
     
    cout<<"Befor Reverse: \n"<<val<<endl;

    cout<<"After Reverse:\n "; 
    Reversevariable(val);
}