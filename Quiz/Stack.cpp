#include<iostream>
#include<stack>
using namespace std;

stack <int> st;

void insert(int x)
{
    st.push(x);

}
void display()
{
    while(!st.empty())
    {
    cout<<st.top()<<" ";
    st.pop();
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    cout<<"Stack: ";
    display();

    return 0;

}