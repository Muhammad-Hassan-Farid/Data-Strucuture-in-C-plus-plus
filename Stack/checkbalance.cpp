#include <iostream>
#include <stack>

using namespace std;

bool checkbalance(string arr)
{
    stack<char> store;

    for (int i = 0; i < arr.length(); i++)
    {
        if (store.empty())
        {
            store.push(arr[i]);
        }
        else if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            store.push(arr[i]);
        }
        else
        {
            store.pop();
        }
    }
    if (store.empty())
    {
        return true;
    }
    return false;
}
     
int main(){

    string expression = "{()}[]";

    if (checkbalance(expression))
    {
        cout<<"Exxpression: "<< expression <<endl;
        cout << "Expression is Balance.";
    }
    else
    {
        cout << "Exxpression: " << expression << endl;
        cout << "Expression is not Balance.";
    }

    return 0;
}