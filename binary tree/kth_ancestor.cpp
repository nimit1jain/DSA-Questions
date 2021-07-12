#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node *next;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
node *lca(node *root, int v1, int &k)
{
    if (root == NULL)
        return NULL;
    if (root->data == v1)
    {k--;
        return root;
    }
    node *l = lca(root->left, v1, k);
    node *r = lca(root->right, v1, k);
    if (l!=NULL)
    {
        if (k >= 0)
        {
            k--;
            return root;
        }
        else
            return l;
    }
    else if (r!=NULL)
    {
        if (k >= 0)
        {
            k--;
            return root;
        }
        else
            return r;
    }
    else return NULL;
}
int main()
{
    node *root = new node(10);
    root->left = new node(6);
    root->right = new node(17);
    root->left->left = new node(3);
    root->left->right = new node(8);
    root->right->left = new node(11);
    root->right->right = new node(20);
    int k=1;
       node *ans = lca(root, 3, k);
    cout << ans->data;
}