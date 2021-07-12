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
node *buildBST(node *root, int value)
{
    if (root == NULL)
        return new node(value);
    if (value < root->data)
    {
        root->left = buildBST(root->left, value);
    }
    else
        root->right = buildBST(root->right, value);
    return root;
}
void displaybst(node * root)
{
    if(root==NULL)
    {
        return;
    }
    displaybst(root->left);
    cout<<root->data<<" ";
    displaybst(root->right);
    
}
int ans=1;
void checkbst(node* root,node* &prev)
{if(root==NULL)
{
    return;
}
checkbst(root->left,prev);
if(prev!=NULL&&root->data<=prev->data)
{
    ans=0;
    return;
}
prev=root;
checkbst(root->right,prev);

}
int main()
{
    node*  root=new node(10);
    root->left=new node(6);
    root->right=new node(17);
    root->left->left=new node(3);
    root->left->right=new node(8);
    root->right->left=new node(11);
    root->right->right=new node(5);
node* prev=NULL;
    checkbst(root,prev);
    if(ans==1)
    cout<<"yes";
    else cout<<"no";
    return 0;

}