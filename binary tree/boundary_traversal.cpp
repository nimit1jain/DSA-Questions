#include <iostream>
#include<bits/stdc++.h>
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
void leftview(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if(root->left!=NULL)
    cout << root->data << " ";
    leftview(root->left);
    
}void rightview(node *root)
{
    if (root == NULL)
    {
        return;
    }
  
    cout << root->data << " ";
    rightview(root->right);
    
}
void bottomview(node * root)
{
    if(root==NULL)
    {
        return ;
    }
    bottomview(root->left);
    bottomview(root->right);
    if(root->left==NULL&&root->right==NULL)
    cout<<root->data<<" ";
    
    }
int main()
{node *root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
root->right->left->left=new node(8);

leftview(root);
cout<<endl;
bottomview(root);
cout<<endl;
rightview(root);
return 0;
}