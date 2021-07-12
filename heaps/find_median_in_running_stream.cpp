#include <iostream>
#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>> pqmax;
priority_queue<int, vector<int>, greater<int>> pqmin;

int median(int x)
{
    if (pqmax.size() == pqmin.size())
    {
        
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            cout<<x<<endl;
            return 0;
        }
        if (x < pqmax.top())
        {
            pqmax.push(x);
            cout<<pqmax.top()<<endl;
        }
        else
        {
            pqmin.push(x);
            cout<<pqmin.top()<<endl;
        }
    }
    else
    {
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
                cout << (pqmin.top() + pqmax.top()) / 2 << endl;
                
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
                cout << (pqmin.top() + pqmax.top()) / 2 << endl;
            }
        }
        else
        {
            if (x <= pqmin.top())
            {
                pqmax.push(x);
                cout << (pqmin.top() + pqmax.top()) / 2 << endl;
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
                 cout << (pqmin.top() + pqmax.top()) / 2 << endl;
            }
        }
    }
}

int main()
{
    vector<int> x = {5, 15, 1, 3};
    for (int i = 0; i < x.size(); i++)
    {
        median(x[i]);
    }

    return 0;
}