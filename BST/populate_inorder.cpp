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
void displaybst(node *root)
{
    if (root == NULL)
    {
        return;
    }
    displaybst(root->left);
    cout << root->data << " ";
    displaybst(root->right);
}
node *prevo;
void populate(node *root)
{
    if (root == NULL)
        return;

    populate(root->left);
    if (prevo != NULL)
        prevo->next = root;
    prevo = root;
    populate(root->right);
}
void displaynext(node *root)
{
    if (root == NULL)
        return;
    displaynext(root->left);
    if (root->next)
        cout << root->next->data << " -> ";
    else
        cout << root->data << "-> -1";
    displaynext(root->right);
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
    displaybst(root);
    populate(root);
    displaynext(root);
}