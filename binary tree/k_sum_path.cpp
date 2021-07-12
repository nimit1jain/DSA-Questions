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
void ksum(node* root,vector<int> &v,int k)
{
    if(root==NULL)
    return;
    v.push_back(root->data);
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
    }
    if(sum==k)
    {cout<<"[";
        for(int i=0;i<v.size();i++)
       { cout<<v[i]<<"->";}
        cout<<"]"<<endl;
    }
    ksum(root->left,v,k);
    ksum(root->right,v,k);
    v.pop_back();

} 
int main()
{
    node* root=new node(1);
    root->left=new node(3);
    root->left->left=new node(2);
    root->left->right=new node(1);
    root->left->right->left=new node(1);
    root->right=new node(-1);
    root->right->left=new node(5);
    int k=5;
    vector<int> v;
    ksum(root,v,k);
return 0;
}