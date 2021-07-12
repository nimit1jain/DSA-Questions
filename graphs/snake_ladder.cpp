#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[6][6] = {
        {-1, -1, 7, -1, -1, 9},
        {-1, -1, 16, -1, -1, -1},
        {-1, -1, -1, 24, -1, -1},
        {-1, 35, -1, -1, -1, -1},
        {-1, -1, -1, 5, -1, -1},
        {-1, 2, -1, -1, -1, -1}};
    map<int, pair<int, int>> copy;
    int k = 0;
    int carr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            k++;
            copy[k] = {i, j};
            carr[i][j] = k;
        }
    }
    int ans[6+1];
    for(int i=0;i<=6;i++)
    ans[i]=0;
    pair<int, int> present;
    present = make_pair(0, 0);
    int count=0;
    while (present.first != 5 && present.second != 5)
    {
        for (int d = 1; d <= 6; d++)
        {
            if (arr[present.first][present.second] == -1)
            {
                present = make_pair(copy[carr[present.first][present.second] + d].first, copy[carr[present.first][present.second] + d].second);
                if (arr[present.first][present.second] != -1)
                {
                    present = make_pair(copy[carr[present.first][present.second]].first, copy[carr[present.first][present.second]].first);
                }
            }
            else
            {
                present = make_pair(copy[carr[present.first][present.second] + d].first, copy[carr[present.first][present.second] + d].second);
                if (arr[present.first][present.second] != -1)
                {
                    present = make_pair(copy[carr[present.first][present.second]].first, copy[carr[present.first][present.second]].first);
                }
            }
            ans[d]=carr[present.first][present.second];

        }
            present=make_pair(copy[*max_element(ans,ans+6)].first,copy[*max_element(ans,ans+6)].second);
            for(int i=0;i<7;i++)
            ans[i]=0;
            count++;
    }
    cout<<present.first<<" "<<present.second<<endl;
    cout<<count<<endl;
    return 0;
}