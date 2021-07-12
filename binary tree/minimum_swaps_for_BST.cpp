#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void inorder(int arr[], vector<int> &v, int index, int n)
{
    if (index >= n)
    {
        return;
    }
    inorder(arr, v, 2 * index + 1, 7);
    v.push_back(arr[index]);
    inorder(arr, v, 2 * index + 2, 7);
}
int makebst(vector<int> &v)
{
    vector<pair<int, int>> p(7);
    int ans = 0;

    for (int i = 0; i < 7; i++)
    {
        p[i].first = v[i];
        p[i].second = i;
    }

    sort(p.begin(), p.end());
    for (int i = 0; i < 7; i++)
    {
        if (p[i].second == i)
        {
            continue;
        }
        else
        {
            swap(p[i].first, p[p[i].second].first);
            swap(p[i].second, p[p[i].second].second);
        }
        if (p[i].second != i)
            --i;
       
    ans++;
    }
    return ans;
}
int main()
{

    int arr[7] = {5, 6, 7, 8, 9, 10, 11};
    vector<int> v;
    inorder(arr, v, 0, 7);
    int ans = makebst(v);
    cout << "number of swaps required = " << ans << endl;

    return 0;
}