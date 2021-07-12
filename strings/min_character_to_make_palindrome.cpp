#include <iostream>
#include <string>
#include <algorithm>
#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int start = s.size();
    reverse(s.begin(), s.end());
    string s2 = s;

    string ss = ("$");
    reverse(s.begin(), s.end());

    s.append(ss);
    s.append(s2);
    int lps[s.size()];
cout<<s<<endl;
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < s.size())
    {
        if (s[len] == s[i])
        {
            lps[i] = len + 1;
            len = len + 1;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
           {     lps[i] = 0;
            i++;}
        }
    }
    cout<<start<<endl;
    cout<<s.size()<<endl;
    cout<<lps[s.size()-1]<<endl;
    cout << "answer = " << start - lps[s.size() - 1] << endl;

    return 0;
}