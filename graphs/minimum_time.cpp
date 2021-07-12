// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// { public:
// int mintime(int v,vector<int>vi[])
// {
//     vector<int> in(v,0);
//     queue<int>q;
//     for(int i=0;i<v;i++)
//     {
//         for(auto it:vi[i])
//         {
//             in[it]++;
//         }
//     }
//     for(int i=0;i<v;i++)
//     {
//         if(in[i]==0)
//         q.push(i);
//     }int ans=0;
//     while(!q.empty())
//     {int l=q.size();
//     ans++;
//     for(int k=0;k<l;k++)
//      {   int td=q.front();

//         q.pop();

//         for(auto it:vi[td]){
//             in[it]--;
//             if(in[it]==0)
//             q.push(it);
//         }
//     }
//     }
//     return ans;

// }

// };
// int main()
// {
//     int v, e;
//     cin >> v;
//     cin >> e;
//     vector<int> vi[v + 1];
//     for (int i = 0; i < e; i++)
//     {
//         int x;
//         int y;
//         cin >> x;
//         cin >> y;
//         vi[x].push_back(y);
//     }
//     for (int i = 0; i < v; i++)
//     {
//         cout << i << "->";
//         for (int j = 0; j < vi[i].size(); j++)
//         {
//             cout << vi[i][j];
//         }
//         cout << endl;
//     }
//     Solution ans;

//     int k=ans.mintime(v,vi);
//
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mintime(int v, vector<int> vi[])
    {
        vector<int> in(v, 0);
        queue<int> q;
        for (int i = 0; i < v; i++)
        {
            for (auto it : vi[i])
            {
                in[it]++;
            }
        }
        for (int i = 0; i < v; i++)
        {
            if (in[i] == 0)
                q.push(i);
        }
        int ans = 0;
        while (!q.empty())
        {
            int l = q.size();
                ans++;
            for (int k = 0; k < l; k++)
            {
                int td = q.front();
                // ans++;
                q.pop();

                for (auto it : vi[td])
                {
                    in[it]--;
                    if (in[it] == 0)
                        q.push(it);
                }
            }
        }
        return ans;
    }
};
int main()
{
    int v, e;
    cin >> v;
    cin >> e;
    vector<int> vi[v + 1];
    for (int i = 0; i < e; i++)
    {
        int x;
        int y;
        cin >> x;
        cin >> y;
        vi[x].push_back(y);
    }
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (int j = 0; j < vi[i].size(); j++)
        {
            cout << vi[i][j];
        }
        cout << endl;
    }
    Solution ans;

    int k = ans.mintime(v, vi);
    cout<<"jobs will take "<<k <<" time to complete";
    // if (k < v)
    // {
    //     cout << "jobs cant be completed";
    // }
    // else
    //     cout << "can be completed";
    return 0;
}