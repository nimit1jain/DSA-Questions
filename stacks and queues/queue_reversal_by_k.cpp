#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reversek(queue<int> &q, int k)
{
    if (q.empty())
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
        stack<int> st;
        for (int i = 1; i <= k; i++)
        {
            int temp = q.front();
            q.pop();
            st.push(temp);
        }
        while (!st.empty())
        {
            int temp = st.top();
            st.pop();
            q.push(temp);
        }
        for (int i = 1; i <= (q.size() - k); i++)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
}
void printq(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k;
    cout << "enter the value of k" << endl;
    cin >> k;
    reversek(q,k);
    printq(q);

    return 0;
}