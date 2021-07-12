#include <iostream>
#include<bits/stdc++.h>
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
node* btfromst(string s,queue<char> &q)
{if(q.empty())
{
    return NULL;
}int num=0;
if(q.front()!='('&&q.front()!=')')
{
num=(int)(q.front()-'0');
cout<<num<<endl;
q.pop();
}
    node* root=new node(num);
   
if(q.empty())
{
    return root;
}
if(q.front()=='(')
{
    q.pop();
    root->left=btfromst(s,q);
}  
if(q.front()==')')
{
    q.pop();
}
if(q.front()=='(')
{
    q.pop();
    root->right=btfromst(s,q);
}
if(q.front()==')')
{
    q.pop();
}
return root;
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    string s={"1(2(4)(5))(3(6(8))(7))"};
    
    queue<char> q;

    for(int i=0;i<s.size();i++)
    {
        q.push(s[i]);
    }
    node* root=btfromst(s,q);
    preorder(root);

}