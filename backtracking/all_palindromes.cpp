#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int checkpal(string s)
{
    if (s.length() == 0)
        return 0;
    if (s.length() == 1)
        return 1;
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {  
            int t = checkpal(s.substr(i, j - i + 1));
            if (t)
                cout << s.substr(i, j-i+1) << " ";
        }
    }

    return 0;
}