#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int sumnodes(node* &root)
{
      if(root==NULL)
    {
        return 0;
    }
    // int a =sumnodes(root->left);
    // int b=sumnodes(root->right);
    // int x=root->data;
    // root->data=a+b;
    // return a+b+x;
    int sum=sumnodes(root->left)+sumnodes(root->right);
    int x=root->data;
    root->data=sum;
    return sum+x;
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    sumnodes(root);
preorder(root);
    
}