#include<iostream>
using namespace std;
class node{
public:
int data;
node* right;
node* left;
node(int value)
{
    data=value;
    right=NULL;
    left=NULL;
}
};
node* mirror(node* root)
{
    if(root==NULL)
    {
        return root;
    }
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    if(root->left!=NULL)
    {
        mirror(root->left);
    }
    if(root->right!=NULL)
    {
        mirror(root->right);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{node *root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
cout<<"inorder tree traversal ="<<endl;
inorder(root);
root=mirror(root);
cout<<"mirror tree traversal ="<<endl;
inorder(root);
    
return 0;

}