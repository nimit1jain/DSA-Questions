#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}
int main()
{stack<int> st;
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
st.push(8);
insertAtBottom(st,2);
insertAtBottom(st,1);

    
return 0;

}