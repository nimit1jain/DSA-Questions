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
int ma=0;
int longestsumtree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
  int lsum=longestsumtree(root->left);
  int rsum=longestsumtree(root->right);
 ma=max(ma,lsum+rsum+root->data);
 return lsum+rsum+root->data;
}
int main()
{
      node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(-10);
   longestsumtree(root);
    cout<<ma<<endl;
    return 0;
}