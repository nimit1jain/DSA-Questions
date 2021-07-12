#include <bits/stdc++.h>
#include <iostream>
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

void inorder(vector<int> &arr,node* root)
{
    if(root==NULL)
    return;
    inorder(arr,root->left);
    arr.push_back(root->data);
    inorder(arr,root->right);
    
}int i=-1;
node* preorder(node* root,vector<int> arr)
{
    if(root==NULL)
    return NULL;
    root->data=arr[i++];
    preorder(root->left,arr);
    preorder(root->right,arr);

}

int main()
{
node* root=new node(4);
root->left=new node(2);
root->left->right=new node(3);
root->left->left=new node(1);
root->right=new node(6);
root->right->left=new node(5);
root->right->right=new node(7);
vector<int> arr;
inorder(arr,root);

root=preorder(root,arr);
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}



return 0;


}