#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int value)
{
    data=value;
    left=NULL;
    right=NULL;
}
};
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->left)+1;
    int rheight=height(root->right)+1;
    if(lheight-rheight>1)
    {
        
        return 0;
    }
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
    int h=height(root);
    if(h==0)
    cout<<"unbalanced";
    else cout<<"balanced";
    return 0;
}