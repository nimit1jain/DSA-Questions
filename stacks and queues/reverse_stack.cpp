#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &st,int ele)
{if(st.empty())
{
  st.push(ele);
  return;
}
    int topele=st.top();
    st.pop();
    insertatbottom(st,ele);
    
    st.push(topele);
}
void reverse(stack<int> &st)
{if(st.empty())
{
    return;
}
    int ele=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);
}
int main()
{stack<int> st;
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
// reverse(st);
insertatbottom(st,2);
insertatbottom(st,1);
reverse(st);
int pops=st.top();
cout<<pops<<endl;
cout<<"exe";
    
return 0;

}