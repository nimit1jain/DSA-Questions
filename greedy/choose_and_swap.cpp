#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    set<char> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] > 1)
        {
            t.insert(s[i]);
            mp[s[i]] = 0;
        }
        else if (mp[s[i]] == 1)
            t.insert(s[i]);
    }

    
    for (int i = 0; i < s.size(); i++)
    {
        t.erase(s[i]);
        char ch = *t.begin();

        if (ch < s[i])
        {
            int ch2 = s[i];
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == ch)
                    s[j] = ch2;
                else if (s[j] == ch2)
                    s[j] = ch;
            }
            break;
        }
    }
    cout << s;
    return 0;
}