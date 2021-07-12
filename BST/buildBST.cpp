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
node* searchkey(node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(key>root->data)
    {
        searchkey(root->right,key);
    }
    else
    searchkey(root->left,key);
    return root;

}
 int maxi=INT_MIN;
    int mini=INT_MAX;
int maxBST(node* root)
{
    if(root==NULL)
    {
        return maxi;
    }
    if(root->data<maxi)
    {
        maxi=maxBST(root->right);
    }
    else
    {maxi=root->data;
maxi=maxBST(root->right);}

    return  maxi;
   


}
int minBST(node* root)
{
    if(root==NULL)
    {
        return mini;
    }
    if(root->data>mini)
    {
        mini=minBST(root->left);
    }
    else{
        mini=root->data;
        mini=minBST(root->left);
    }
    return mini;
}

int main()
{
int arr[]={1,2,8,3,5,7,9};
node *root=new node(1);
for(int i=1;i<7;i++)
{
    buildBST(root,arr[i]);
}
displaybst(root);
int maxv=maxBST(root);
cout<<"max value = "<<maxv<<endl;
int minv=minBST(root);
cout<<"min value = "<<minv<<endl;

}