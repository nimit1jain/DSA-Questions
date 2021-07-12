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
static int  ans = 0;
void searchkey(node* root,int key)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->data==key)
    {ans++;
        return ;
    }
    if(key>root->data)
    {
        searchkey(root->right,key);
    }
    else
    searchkey(root->left,key);
    return ;

}node* root2(NULL);
node *countpairs(node *root, int k)
{
    if (root == NULL)
        return NULL;
    
    countpairs(root->left, k);
    countpairs(root->right, k);
    int diff=k-root->data;
    searchkey(root2,diff);

}
int main()
{
    node *root1 = new node(5); /*             5        */
        root1->left = new node(3); /*           /   \      */
        root1->right = new node(7); /*         3     7     */
        root1->left->left = new node(2); /*    / \   / \    */
        root1->left->right = new node(4); /*  2   4 6   8 */
        root1->right->left = new node(6);
        root1->right->right = new node(8);
 
        // formation of BST 2
        root2 = new node(10); /*           10         */
        root2->left = new node(6); /*           /   \ */
        root2->right = new node(15); /*        6     15 */
        root2->left->left = new node(3); /*    / \   /  \ */
        root2->left->right
            = new node(8); /*  3  8  11  18    */
        root2->right->left = new node(11);
        root2->right->right = new node(18);
        countpairs(root1,16);
        cout<<ans;
}