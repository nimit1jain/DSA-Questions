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
};int ans=1;
void isomorphism(node* root1,node* root2)
{if(root1==NULL||root2==NULL)
return;
if(root1->data!=root2->data)
ans=0;
isomorphism(root1->left,root2->right);
isomorphism(root1->right,root2->left);
}  
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    node* root2=new node(1);
     root2->left = new node(2);
    root2->right = new node(3);
    root2->left->left = new node(5);
    root2->left->right = new node(4);
    root2->right->left = new node(6);
    root2->right->right = new node(7);
isomorphism(root,root2);
if(ans==0)
cout<<"yes"<<endl;
else cout<<"no"<<endl;
    return 0;
}