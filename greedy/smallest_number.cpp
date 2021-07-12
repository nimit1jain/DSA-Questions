#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string smallestNumber(int S, int D)
{
    // code here
    if (D == 1 && S > 9)
        return "-1";
    if (D == 1 && S <= 9)
        return to_string(S);
    string res = "";
    int n = S - 1;
    if (S > 9)
        n = 9;
    int sum = n;
    res += to_string(n);
    int i = 2;
    while (i < D)
    {
        if (S - sum < n)
        {
            S = S - sum;
            n = S - 1;
            sum = n;
            res += to_string(n);
        }
        else
        {
            if (S - sum == n)
            {
                res += "0";
            }
            else
            {
                res += to_string(n);
                sum += n;
            }
        }
        i += 1;
    }
    res += to_string(S - sum);
    // cout<<res<<endl; reverse(res.begin()="" ,="" res.end());="" if(res.size()="" !="D)" return="" "-1";="" return="" res;="" }<="" code="">
}
int main()
{
    int s;
    cin >> s;
    int d;
    cin >> d;
    if (d == 1)
    {
        cout << d;
        return 0;
    }
    if (s > 9 * d)
    {
        cout << "no such number is present";
        return 0;
    }
    string s = "";
    for (int i = 1; i <= d; i++)
    {
        for (int i = 9; i >= 0; i++)
        {
            int t = i;
            if (t < s)
            {
                s = s + i;
            }
        }
    }

    return 0;
}