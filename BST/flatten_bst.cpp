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
void inorder(node* root,node* &temp)
{
    if(root==NULL)
    return ;
    inorder(root->left,temp);
    temp->right=root;
    temp->left=NULL;
    temp=root;

    inorder(root->right,temp);

}
node* flatten(node* root)
{
    if(root==NULL)
    return NULL;
    node* dummy=new node(-1);
    node* temp=dummy;
    inorder(root,temp);
    node* pemp=dummy;
    pemp=pemp->right;
    delete dummy;
    return pemp;
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
int main()
{
    node *root = new node(8);
    root->left = new node(7);
    root->right = new node(10);
    root->left->left = new node(2);

    root->right->left = new node(9);
    root->right->right = new node(13);
    node* pemp=flatten(root);
    displaybst(pemp);


}