#include<iostream>
#include<bits\stdc++.h>
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
int longestsum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=longestsum(root->left)+1;
    int lsum=longestsum(root->left)+root->data;
    int rheight=longestsum(root->right)+1;
    int rsum=longestsum(root->right)+root->data;
    if(lheight>rheight)
    return lsum;
    else return rsum;
}
int main()
{
      node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->left = new node(5);
    root->left->left->right = new node(6);
    root->left->left->right->right = new node(7);
    int sum=longestsum(root);
    cout<<sum<<endl;
    return 0;
}