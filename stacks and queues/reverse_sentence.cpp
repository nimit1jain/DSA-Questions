#include<iostream>
#include<stack>
using namespace std;
void reverse(string s,int n)
{
    stack<string> st;

    for(int i=0;i<n;i++)
    {string word="";
    while(s[i]!=' '&& i<n){
        word=word+s[i];
        i++;
    }
        st.push(word);

    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
       
    }
}
int main()
{
    string s="how are you doing?";
    int n=s.size();
    reverse(s,n);
    return 0;
}