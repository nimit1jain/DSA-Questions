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
int levelorder(node *root)
{
    if (root == NULL)
        return 0;
    queue<node *> q;
    q.push(root);
    vector<int> arr;
    while (!q.empty())
    {
        node *temp = q.front();
        arr.push_back(temp->data);

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        q.pop();
    }
    int i = 0;
    int ans = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    while (2 * i + 2 < arr.size())
    {
        if (arr[i] < arr[2 * i + 1] && arr[i] < arr[2 * i + 2])
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    return 1;
}
int main()
{
    node *root = new node(20);
    root->left = new node(18);
    root->right = new node(16);
    root->left->left = new node(11);
    root->left->right = new node(12);
    root->right->left = new node(15);
    root->right->right = new node(13);
    int sd = levelorder(root);
    if (sd)
        cout << "yes";
    else
        cout << "no";

    return 0;
}