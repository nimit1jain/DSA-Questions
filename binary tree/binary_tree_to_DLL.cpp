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
void solve(node* root,node* &head,node* &prev,int &f)
{
    if(root==NULL)
    {
        return;
    }
    solve(root->left,head,prev,f);
    if(f==0)
    {
        f=1;
        head=root;
        prev=root;
    }
    else{
        prev->right=root;

        prev->right->left=prev;
        prev=prev->right;
    }
    solve(root->right,head,prev,f);
}
node* btodll(node* root)
{
    node* head=NULL;
    node* prev=NULL;
    int f=0;
    solve(root,head,prev,f);
    return head;
}
int main()
{
    
return 0;

}