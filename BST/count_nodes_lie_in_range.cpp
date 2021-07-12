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
int ans = 0;
void countnode(node *root, int l, int m)
{
    if (root == NULL)
        return;
    countnode(root->left, l, m);
    countnode(root->right, l, m);
    if (root->data >= l && root->data <= m)
        ans++;
}
int main()
{
    node *root1 = new node(5);        /*             5        */
    root1->left = new node(3);        /*           /   \      */
    root1->right = new node(7);       /*         3     7     */
    root1->left->left = new node(2);  /*    / \   / \    */
    root1->left->right = new node(4); /*  2   4 6   8 */
    root1->right->left = new node(6);
    root1->right->right = new node(8);
    countnode(root1,3,7);
    cout<<ans;
}