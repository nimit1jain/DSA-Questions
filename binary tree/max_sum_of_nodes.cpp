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
unordered_map<node*,int> dp;
int maxsum(node* root)
{
    if(root==NULL)
    return 0;
    if(dp[root])
    return dp[root];
    int incl=root->data;
    if(root->left){
   incl=incl+maxsum(root->left->right);
    incl=incl+maxsum(root->left->left);}
    if(root->right){
   incl=incl+maxsum(root->right->right);
    incl=incl+maxsum(root->right->left);
    }
    int excl=maxsum(root->left)+maxsum(root->right);
    dp[root]=max(incl,excl);
    return dp[root];
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
    int ans=maxsum(root);
    cout<<ans<<endl;
  
    return 0;
}