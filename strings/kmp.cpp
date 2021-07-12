#include <iostream>
#include <string>
#include <bits\stdc++.h>
#include <algorithm>
using namespace std;
void kmp(string t, int lps[], int size)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < size)
    {
        if (t[len] == t[i])
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
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
// for matching the given string with the main string this is the new function
void matching(string s, string t, int lps[])
{
    int i = 0;
    int j = 0;
    int m = t.length();
    int n = s.length();
    kmp(t, lps, m);
    for(int k=0;k<m;k++)
    {
        cout<<lps[i];
    }
    cout<<endl;
    while (i < n - m + 1)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
                i++;
        }
        if (j == m)
        {
            cout << i - j << endl;
            j = lps[j - 1];
        }
    }
}
int main()
{
    string s;
    cout << "enter the string in which you want to check" << endl;
    cin >> s;
    string t;
    cout << "enter the string you want to check" << endl;
    cin >> t;
    int lps[t.size()];
    matching(s, t, lps);

    return 0;
}
// this is for only prefix and suffix problem
// int main()
// {
//     string s;
//     cout << "enter the string in whic you want to know the proper prefix and suffix" << endl;
//     cin >> s;
//     int lps[s.size()];
//     kmp(s,lps,s.length());
//     int index=*max_element(lps,lps+s.length());
// for(int i=0;i<index;i++)
// {
//     cout<<s[i];
// }
//     return 0;
// }