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
int checkdead(node *root,int max,int min)
{
    if (root == NULL)
        return 0;
   if(max-min<=2)
   return true;
   return(checkdead(root->left,root->data,min)||checkdead(root->right,max,root->data));
}
bool isdead(node* root)
{
    return(checkdead(root,INT_MAX,0));
}
int main()
{
    node *root = new node(8);
    root->left = new node(7);
    root->right = new node(10);
    root->left->left = new node(2);

    root->right->left = new node(9);
    root->right->right = new node(13);
if(isdead(root))
cout<<"dead end ";
else cout<<"a good tree";


}