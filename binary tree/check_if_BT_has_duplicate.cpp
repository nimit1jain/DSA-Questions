#include<iostream>
#include<bits\stdc++.h>
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
unordered_map<string,int> mp;
string check(node* root)
{if(root==NULL)
return "&";
string s="";
if(root->left==NULL&&root->right==NULL)
    {
        s=to_string(root->data);
        return s;
    }
    s=s+to_string(root->data);
    s=s+check(root->left);
    s=s+check(root->right);
    mp[s]++;
    return s;
    


}
int main()
{
     node *root = new node(1);
    root->left = new node(2);
    root->right = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(4);
    root->right->right = new node(5);
    check(root);
    for(auto it:mp)
{
    if(it.second>=2)
    {
        cout<<it.first;
return 0;}
}
cout<<"no";
return 0;

}