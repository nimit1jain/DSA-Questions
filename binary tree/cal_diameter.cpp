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
int calcdiameter(node* root,int *height)
{
    if(root==NULL)
    {*height=0;
        return 0;
    }
    int lh=0;int rh=0;
    int ldiameter=calcdiameter(root->left,&lh);
    int rdiameter=calcdiameter(root->right, &rh);
    int curdiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(curdiameter,max(ldiameter,rdiameter));

}
// this is of order n^2
// int  height(node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int lheight=height(root->left)+1;
//     int rheight=height(root->right)+1;
//     return max(lheight,rheight);
// }
// int calcdia(node* root)
// {
//     if (root==NULL)
//     {
//         return 0;
//     }
//     int lheight=height(root->left);
//     int rheight=height(root->right);
//     int curdiameter=lheight+rheight+1;
//     int ldiameter=calcdia(root->left);
//     int rdiameter=calcdia(root->right);
//     return max(curdiameter,max(ldiameter,rdiameter));
// }
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
//     int diameter= calcdia(root);
// cout<<"diameter = "<<diameter<<endl;
int h=0;
int diameter=calcdiameter(root,&h);
cout<<"diameter= "<<diameter<<endl;
}