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
int countnodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
}
int sumnodes(node* root)
{
      if(root==NULL)
    {
        return 0;
    }
    return sumnodes(root->left)+sumnodes(root->right)+root->data;
}
int  height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->left)+1;
    int rheight=height(root->right)+1;
    return max(lheight,rheight);
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
    int count=countnodes(root);
    cout<<"total nodes = "<<count<<endl;
    int sum=sumnodes(root);
    cout<<"sum of all nodes = "<<sum<<endl;
    int h=height(root);
    cout<<"height of the tree is = "<<h<<endl;
    
}