#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> p;
    p.push_back({4, 6});
    p.push_back({6, 5});
    p.push_back({7, 3});
    p.push_back({4, 5});
    int balance = 0;
    int diff = 0;
    int index = 0;
    
    for (int i = 0; i < p.size(); i++)
    {
        diff = p[i].first - p[i].second;
        balance = balance + diff;
        if (balance < 0)
        {
            balance = 1;
            index = i + 1;
        }
        

        balance--;
       if (i == p.size() - 1)
        {
            if (balance < 0)
            {
                cout << "there is no possible index" << endl;
            }
        }
    }

    cout << index << endl;
    return 0;
}