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
void inorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}
// int searchpre(int inorder[], int start, int end, int cur)
// {
//     for (int i = start; i <= end; i++)
//     {
//         if (inorder[i] == cur)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// node *buildtreepre(int preorder[], int inorder[], int start, int end)
// {
//     if (start > end)
//     {
//         return NULL;
//     }
//     int cur;
//     static int index = 0;
//     cur = preorder[index];
//     index++;
//     node *pode = new node(cur);
//     int pos;
//     if (start == end)
//     {
//         return pode;
//     }
//     pos = searchpre(inorder, start, end, cur);
//     pode->left = buildtreepre(preorder, inorder, start, pos - 1);
//     pode->right = buildtreepre(preorder, inorder, pos + 1, end);
//     return pode;
// }
int searchpost(int inorder[], int start, int end, int cur)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == cur)
        {
            return i;
        }
    }
    return -1;
}
node *buildtreepost(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    static int index = 4;
    int cur = postorder[index];
    index--;
    node *pode = new node(cur);
    int pos;
    if (start == end)
    {
        return pode;
    }
    pos = searchpost(inorder, start, end, cur);
    pode->right = buildtreepost(postorder, inorder, pos + 1, end);
    pode->left = buildtreepost(postorder, inorder, start, pos - 1);
    return pode;
}
int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    // node* root=buildtreepre(preorder,inorder,0,4);
    // inorderprint(root);
    node *root1 = buildtreepost(postorder, inorder, 0, 4);
    inorderprint(root1);
    return 0;
}