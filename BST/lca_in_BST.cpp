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
// for bst----->
 node *lca( node* root, int n1, int n2)
{
    if (root == NULL) return NULL;
  
    // If both n1 and n2 are smaller than root, then LCA lies in left
    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);
  
    // If both n1 and n2 are greater than root, then LCA lies in right
    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2);
  
    return root;
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
    node* lcavalue=lca(root,3,6);
    cout<<lcavalue->data<<endl;
    return 0;
}