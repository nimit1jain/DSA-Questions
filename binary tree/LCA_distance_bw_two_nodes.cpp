#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node *next;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
node* lca(node* root,int v1,int v2)
{
    if(root==NULL)
    return NULL;
if(root->data==v1||root->data==v2)
{
    return root;
}
    node* l=lca(root->left,v1,v2);
    node* r=lca(root->right,v1,v2);
    if(l&&r)
    return root;
     if(l) return l;
    else return r;
   
}
int solve(node* root,int v)
{
    if(root==NULL)
    return 0;
    if(root->data==v)
    return 1;
    int l=solve(root->left,v);
    int r=solve(root->right,v);
    if(l==0&&r==0)
    return  0;
    else return l+r+1;
}
int dst(node* root,int v1,int v2)
{
    node* lcav=lca(root,v1,v2);
    
    int x=solve(lcav,v1);
    int y=solve(lcav,v2);
    return x+y-2;

}
int main()
{
    node *root = new node(10);
    root->left = new node(6);
    root->right = new node(17);
    root->left->left = new node(3);
    root->left->right = new node(8);
    root->right->left = new node(11);
    root->right->right = new node(20);
    int ans=dst(root,3,11);
    cout<<ans;
   
    return 0;
}