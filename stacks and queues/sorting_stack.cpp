#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void puttemp(stack<int> &st,int k)
{
    if(st.empty()||st.top()>k)
    {
        st.push(k);
        return;
    }
    int temp=st.top();
    st.pop();
    puttemp(st,k);
    st.push(temp);
    return;

}


void sorting(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int temp=st.top();
    st.pop();
    sorting(st);
    puttemp(st,temp);
}

// void sorting(stack<int> &st)
// {
//     int a = st.top();
//     st.pop();
//     int b = st.top();
//     st.pop();
//     if (st.empty())
//     {
//         if (a < b)
//         {
//             st.push(a);
//             st.push(b);
//             return;
//         }
//         else
//         {
//             st.push(b);
//             st.push(a);
//             return;
//         }
//     }
//     while (!st.empty())
//     {
//         if (a < b)
//         {
//             st.push(a);
//             sorting(st);
//             st.push(b);
//             break;
//         }
//         else{
//             st.push(b);
//             sorting(st);
//             st.push(a);
//             break;
//         }
//     }
    
// }

int main()
{
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(1);
    st.push(4);
    st.push(2);
    for (int i = 1; i <5; i++)
    {sorting(st);
    }
int k=st.top();
cout<<k<<endl;
    return 0;
}