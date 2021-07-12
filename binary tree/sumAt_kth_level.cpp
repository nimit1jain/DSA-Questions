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
void levelorder(node *root,int level)
{
    queue<node *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    int k=0;
    int sum=0;
    while (!q.empty()&&k!=level)
    {
        node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            
            if (temp->left)
            {   sum=sum+temp->left->data;
                q.push(temp->left);
            }
            if (temp->right)
                sum=sum+temp->right->data;
                q.push(temp->right);
                
        }
        else if (!q.empty())
        {
            q.push(NULL);
            k++;
            if(k==level)
            {
                break;
            }
            sum=0;
            
        }
    }
    cout<<"sum at "<<level<<" level is "<<sum<<endl;
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
    levelorder(root,2);
}