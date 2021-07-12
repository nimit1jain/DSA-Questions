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
int ans=1;
int checksumnodes(node* root)
{int ans=1;
      if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    return root->data;
    if(ans==0) return 0;
    int a =checksumnodes(root->left);
    int b=checksumnodes(root->right);
    if(a+b!=root->data)ans=0;
    return a+b+root->data;
  
  
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
    node *root = new node(27);
    root->left = new node(9);
    root->right = new node(13);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
//     sumnodes(root);
// preorder(root);
int ans=1;
checksumnodes(root);
if(ans==1)
cout<<"yes";
else cout<<"no";
}