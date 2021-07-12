#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int isvalid(string s)
{
    stack<char> st;
    
for(int i=0;i<s.length();i++)
{
    if(s[i]=='(')
    st.push('(');
    else{
        if(st.empty())
        st.push('(');
        else if(st.top()==')')
        st.push(')');
        else 
        st.pop();
    }

}
return st.size();
}
void solution(string s,int maxallowed,unordered_set<string> ans)
{   if(maxallowed==0)
{
        int m=isvalid(s);
    if(m==0)
    {
        if(ans.find(s)==ans.end()){
        cout<<s<<endl;
        ans.insert(s);
        }
    }
    return;
}
    for(int i=0;i<s.length();i++)
    {
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        solution(left+right,maxallowed-1,ans);
    }
}
int main()
{
    string s;
    cin>>s;
    int minallowed=isvalid(s);
    unordered_set<string> ans;
unordered_map<string,int> mp;
solution(s,minallowed,ans);
cout<<minallowed;
return 0;

}