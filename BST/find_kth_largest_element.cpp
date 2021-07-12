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
};int ma=INT_MIN;
int counti=0;
int kthelement(node* root,int k)
{
    if(root==NULL||counti>=k)
    return 0 ;
    kthelement(root->left,k);
    counti++;
    if(counti==k)
{
    cout<<"kth smallest element is "<<root->data;
    return root->data;
}
kthelement(root->right,k);
    
}
int main()
{
    node*  root=new node(10);
    root->left=new node(6);
    root->right=new node(17);
    root->left->left=new node(3);
    root->left->right=new node(8);
    root->right->left=new node(11);
    root->right->right=new node(23);

int ans=kthelement(root,4);
cout<<ans;


}