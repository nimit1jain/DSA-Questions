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
int ans=1;
void solve(node* root,int h,int &ma)
{
    if(root==NULL)
    {
        return;
    }
    if(ans==0)
    {
        return ;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        if(ma==-1)
        {
            ma=h;
        }
        else{
            if(h!=ma)
            ans=0;
        }
        return;
    }
    solve(root->left,h+1,ma);
    solve(root->right,h+1,ma);
}
int bt(node* root)
{
    ans=1;
    int h=0;
    int ma=-1;
    solve(root,h,ma);
    return ans;
}
int main()
{node *root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
int ans=bt(root);
cout<<ans<<endl;

return 0;
}