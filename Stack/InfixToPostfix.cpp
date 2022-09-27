#include<iostream>
#include<stack>
using namespace std;

int precedence(char x)
{
    if(x=='^')
    {
        return 3;
    }
    else if(x=='*' || x=='/')
    {
        return 2;
    }
    else if(x=='+'||x=='-' )
    {
        return 1;
    }
    else 
    {
        return -1;
    }
}

string InfixToPostfix(string s)
{
    stack <char> st;
    string post;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            post+=s[i];
        }
        else if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]=='}' || s[i]==')' || s[i]==']')
        {
            
            while(!st.empty() && st.top()!='{' || st.top()!='(' || st.top()!='[')
            {
                post+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
       
        else
        {
            while(!st.empty() && precedence(st.top())>precedence(s[i]))
            {
            post+=st.top();
            st.pop();
            }
            st.push(s[i]); 
        }
    }
    while(!st.empty())
    {
        post+=st.top();
        st.pop();
    }
    return post;
}

int main()
{
    string Exp="A+(B*C-(D/E^F)*G)*H";

    cout<<"Our Answere is: "<<InfixToPostfix(Exp);

    return 0;
}