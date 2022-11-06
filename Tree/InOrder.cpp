#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};

void In_order(struct Node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    In_order(root->left);
    cout<<root->data<<" ";
    In_order(root->right);
}


int main()
{
               
            /*      1
                  /  \
                2     3
               / \   / \
              4  5  6   7
            
            */
    struct Node *root = new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);

    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Pre Order Root Travers: ";
    In_order(root);
    
    return 0;
}