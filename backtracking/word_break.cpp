#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s = "catsanddog";

    string arr[] = {"cats", "cat", "and", "sand", "dog"};
    string ans = "";
    for (int i = 0; i < 5; i++)
    {
        int n = arr[i].size();
        if (arr[i] == s.substr(0, n))
        {ans=ans+arr[i]+" ";
            for (int j = i; j < 5; j++)
            {
                int m = arr[j].size();
                if (arr[j] == s.substr(n, m))
                {
                    ans = ans + arr[j] + " ";
                    n = n + m;
                }
            }
        }
    }
    cout << ans;

    return 0;
}