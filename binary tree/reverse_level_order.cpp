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
        right = NULL;
        left = NULL;
    }
};

void reverselevelorder(node *root)
{
    queue<node *> q;
    stack<int> st;
    if (!st.empty())
    {
        return;
    }
    q.push(root);

    
    while (!q.empty())
    {
        node *temp = q.front();

        st.push(temp->data);
        if (temp->right)
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
        q.pop();
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
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
    reverselevelorder(root);
    return 0;
}