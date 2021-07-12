#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int value)
{
    data=value;
    left=NULL;
    right=NULL;
}
};
vector<int> zigzag(node* root)
{vector<int> ans;
queue<node*> q;
if(root==NULL)
{
    return ans;
}
q.push(root);
int f=1;
while(!q.empty())
{
    int sz=q.size();
    vector<int> temp;
    while(sz!=0)
    {
        node* t=q.front();
        temp.push_back(t->data);
        q.pop();
        if(t->left!=NULL)
        {
            q.push(t->left);
        }
        if(t->right!=NULL)
        {
            q.push(t->right);
        }
    }
    if(f%2==0)
    {
        reverse(temp.begin(),temp.end());
    }
    for(int i=0;i<temp.size();i++)
    {
        ans.push_back(temp[i]);
    }
    f++;
}
return ans;
}
int main()
{
    
return 0;

}