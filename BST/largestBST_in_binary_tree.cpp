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
int h=1;
int prevh=1;
void check(node* root)
{
if(root==NULL)
return;
if(root->left!=NULL||root->right!=NULL){
if(root->right==NULL&&root->left->data<root->data)
{
    h++;
    prevh=max(prevh,h);

}
else if(root->left==NULL&&root->right->data>root->data)
{
    h++;
     prevh=max(prevh,h);
}
else if(root->left->data<root->data&&root->right->data>root->data)
{
    h++;
     prevh=max(prevh,h);
}
else h=1;
}

check(root->left);
check(root->right);



}
int main()
{
    node *root = new node(20);
    root->left = new node(18);
    root->right = new node(24);
    root->left->left = new node(11);
    root->left->right = new node(19);
    root->right->left = new node(22);
    root->right->right = new node(27);
    check(root);
    cout<<prevh<<endl;
}
// class bst
// {
// public:
// bool isbst;
// int size;
// int leftmax;
// int rightmin;
// };

// bst helper(Node*root)
// { bst p;
// if(root==NULL)
// {
// p.isbst=true;
// p.size=0;
// p.leftmax=INT_MIN;
// p.rightmin=INT_MAX;

// return p;
// }

// bst left=helper(root->left);
// bst right=helper(root->right);

// if(root->data > left.leftmax && root->data < right.rightmin && left.isbst && right.isbst)
// {
// p.isbst=true;
// p.size=left.size+right.size+1;
// p.leftmax=max(left.leftmax,max(right.leftmax,root->data));
// p.rightmin=min(right.rightmin,min(left.rightmin,root->data));

// }
// else
// {
// p.isbst=false;
// p.size=max(left.size,right.size);

// }
// return p;
// }
// int largestBst(Node *root)
// {
// bst p=helper(root);
// return p.size;
// }