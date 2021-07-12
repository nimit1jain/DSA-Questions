#include <iostream>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int data;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int cur, int start, int end)
{
    for (int i = start; i <= end; i++)

    {
        if (inorder[i] == cur)
        {
            return i;
            break;
        }
    }
    return -1;
}
node *buildtreepre(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int index = 0;
    int cur = preorder[index];
    index++;
    node *Node = new node(cur);
    if (start == end)
    {
        return Node;
    }
    int pos = search(inorder, cur, start, end);
    Node->left = buildtreepre(preorder, inorder, start, pos - 1);
    Node->right = buildtreepre(preorder, inorder, pos + 1, end);
    return Node;
}
node *buildtreepost(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int index = 5;
    int cur = postorder[index];
    index--;
    node *Node = new node(cur);
    if (start == end)
    {
        return Node;
    }
    int pos = search(inorder, cur, start, end);
    Node->right = buildtreepost(postorder, inorder, pos + 1, end);
    Node->left = buildtreepost(postorder, inorder, start, pos - 1);
    return Node;
}
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

int main()
{
    int preorder[] = {23, 12, 2, 8, 45, 99};
    int inorder[] = {2, 12, 8, 23, 99, 45};
    int postorder[] = {2, 8, 12, 99, 45, 23};

    // node* root=buildtreepre(preorder,inorder,0,5);
    // inorderprint(root);
    node *root2 = buildtreepost(postorder, inorder, 0, 5);
    inorderprint(root2);

    return 0;
}