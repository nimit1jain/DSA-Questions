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
    leftview(root->left);
    cout << root->data << " ";
    
}void rightview(node *root)
{
    if (root == NULL)
    {
        return;
    }
    rightview(root->right);
    cout << root->data << " ";
    
}void topview(node *root)
{
    if (root == NULL)
    {
        return;
    }
   leftview(root);
   rightview(root->right);
    
}
void topother(node* root)
{
    map<int,int> mp;
   
    queue<pair<node*,int>> q;
q.push({root,0});
if(root==NULL)
{
    return;
}
while(!q.empty())
{
    node* temp=q.front().first;
    int h=q.front().second;
    q.pop();
    if(mp[h]==NULL)
    {
        mp[h]=temp->data;
    }
    if(temp->left)
    {
        q.push({temp->left,h-1});
    }
    if(temp->right)
    {
        q.push({temp->right,h+1});
    }
}
    for(auto it:mp)
    {
        cout<<it.second;
    }
    return;
}
vector<int> bottomview(node* root)
{
    map<int,int> mp;
    queue<pair<node*,int>> q;
    vector<int>v;
q.push({root,0});
if(root==NULL)
{
    return v;
}
while(!q.empty())
{
    node* temp=q.front().first;
    int h=q.front().second;
    q.pop();
    
        mp[h]=temp->data;
    
    if(temp->left)
    {
        q.push({temp->left,h-1});
    }
    if(temp->right)
    {
        q.push({temp->right,h+1});
    }
}
    for(auto it:mp)
    {
        v.push_back(it.second);
    }
    return v;
}
int main()
{node *root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);

topother(root);cout<<endl;
topview(root);cout<<endl;
bottomview(root);
return 0;
}