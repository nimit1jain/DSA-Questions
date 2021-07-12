#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    stack<char> st;
    int result=0;
    st.push(-1);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty())
            result=max(result,i-st.top());
            else st.push(i);
        }
    }
    cout<<result<<endl;
    return 0;
}



// int parenth(stack<char> st,int length)
// {if(st.empty())
// {
//     return length; 
// }
    
    
//     while(st.top()!=')'&&!st.empty())
// {
// st.pop();
// }
// cout<<"hfht"<<endl;
// int countc=0;int counto=0;
// if(!st.empty()){
//     if(st.top()==')')
// {cout<<"aaaa"<<endl;
//     while(st.top()!='('&&!st.empty())
//     {
//         st.pop();
//         countc++;
//     }

// }
// if(st.top()=='('&&counto<=countc)
// {
//     while(st.top()!=')'&&!st.empty())
//     {
//         st.pop();
//         counto++;
//     }
// }
// if(counto==countc)
// {
// length=max(length,countc);
// }


// parenth(st,length);
// }

// return length;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     stack<char> st;
//     for(int i=0;i<s.size();i++){
//         st.push(s[i]);
//     }
//     int length=-1;
//     length=parenth(st,length);
//     cout<<length<<endl;

// return 0;

// }