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
node *inordersucc(node *root)
{
    node *curr = root->right;
    while (curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

node *deletion(node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (key > root->data)
        root->right = deletion(root->right, key);
    else if (key < root->data)
        root->left = deletion(root->left, key);
    else
    {
        if (root->right == NULL)
        {
            node *temp = root->left;
            delete (root);
            return temp;
        }
        else if (root->left == NULL)
        {
            node *temp = root->right;
            delete (root);
            return temp;
        }
        else
        {
            node *temp = inordersucc(root);
            swap(root->data, temp->data);
            root->right = deletion(root->right, key);
        }
    }

    return root;
}

int main()
{
    int arr[] = {6, 2, 8, 3, 5, 7, 9};
    node *root = new node(1);
    for (int i = 1; i < 7; i++)
    {
        buildBST(root, arr[i]);
    }
    displaybst(root);
    cout<<endl;
    root = deletion(root, 9);
    displaybst(root);
    return 0;
}