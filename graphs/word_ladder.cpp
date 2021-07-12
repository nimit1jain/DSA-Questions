
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<string> v = {"hot", "dog", "dot", "lot", "cog", "log"};
    string first;
    cin >> first;
    string last;
    cin >> last;
    unordered_set<string> word;
    int a = 0;
    for (int i = 0; i < v.size(); i++)
    {
        word.insert(v[i]);
        if (v[i] == last)
            a = 1;
    }
    if (a != 1)
    {
        cout << "the last string is not present in the wordlist";
        return 0;
    }
    queue<string> q;
    q.push(first);
    int len = 0;
    while (!q.empty())
    {
        len++;
        for(int k=0;k<q.size();k++)
        {
        string s = q.front();
        q.pop();

        for (int i = 0; i < s.size(); i++)
        {
            char res = s[i];
            for (char j = 'a'; j <='z'; j++)
            {
                s[i] = j;
                if (s == last)
                {
                    cout << len + 1;
                    return 0;
                }
                if (word.find(s) == word.end())
                    continue;
                q.push(s);
                word.erase(s);
            }
            s[i] = res;
        }
        }   
    }
    return 0;
}

// i made the dictionary program question is different
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     vector<string> v = {"hot", "dog", "cat", "fat", "cog", "lot"};
//     string first;
//     cin >> first;
//     string last;
//     cin >> last;
//     int c = 0;
//     int a = 0;
//     int pre = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == first)
//             pre = 1;
//     }
//     if (pre == 0)
//         v.push_back(first);
//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         c++;
//         if (last == v[i])
//             break;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         a++;
//         if (first == v[i])
//         {
//             break;
//         }
//     }
//     cout << c - a + 1 << endl;

//     return 0;
// }