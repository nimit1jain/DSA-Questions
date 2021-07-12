#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve(vector<int> arr, int sum, int i, vector<int> &temp, vector<vector<int>> &res,int n)
{
    if (sum == 0)
    {
        res.push_back(temp);
        return ;
    }
    for (int k = i; k < n; k++)
    {
        if (sum - arr[k] >= 0)
        {
            sum = sum - arr[k];
            temp.push_back(arr[k]);
            solve(arr, sum, i, temp, res,n);

            sum = sum + arr[k];
            temp.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int y;
    cin >> y;
    sort(arr.begin(), arr.end());
    vector<int> temp;
    vector<vector<int>> res;
    solve(arr, y, 0, temp, res,n);
    for (int i = 0; i < res.size(); i++)
    {
        for (auto it : res[i])
        {
            cout << res[i][it] << " ";
        }
        cout << endl;
    }
    return 0;
}