#include <iostream>
#include <bits/stdc++.h>
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
node *buildBST(node *root, int value)
{
    if (root == NULL)
        return new node(value);
    if (value < root->data)
    {
        root->left = buildBST(root->left, value);
    }
    else
        root->right = buildBST(root->right, value);
    return root;
}
void displaybst(node * root)
{
    if(root==NULL)
    {
        return;
    }
    displaybst(root->left);
    cout<<root->data<<" ";
    displaybst(root->right);
    
}
int counti=0;
int kthelement(node* root,int k)
{
    if(root==NULL||counti>=k)
    return 0 ;
    kthelement(root->left,k);
    counti++;
    if(counti==k)
{
    return root->data;
}
kthelement(root->right,k);
    
}

int countnodes(node* root)
{
    if(root==NULL)
    return 0;
    int lc=countnodes(root->left);
    int rc=countnodes(root->right);
    return lc+rc+1;
    
}
int findmedian(node* root)
{int c=countnodes(root);
if(c%2!=0)
{
    int elepos=(c+1)/2;
    int median=kthelement(root,elepos);
    return median;

}
else
{
    int ele1=c/2;
    int ele2=ele1+1;
    int m1=kthelement(root,ele1);
    int m2=kthelement(root,ele2);
    return (m1+m2)/2;
}
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
    
    int median=findmedian(root);
    cout<<"median is = "<<median<<endl;
return 0;
}