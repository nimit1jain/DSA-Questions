#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "enter the string and * ? too"<<endl;
    cin >> s;
    cout << "enter the second string in which you want to check"<<endl;
    string t;
    cin >> t;
    int m = t.size();
    int n = s.size();
    int pos;
    int pos2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            pos = i;
        if (s[i] == '?')
        {
            pos2 = i;
        }
    }
    int i = n - 1;
    int j = m - 1;
    int last = 1;
    while (i > pos && j >= 0)
    {
        if (s[i] != t[j])
        {
            last = -1;
        }
        i--;
        j--;
    }
    int first = 1;
    if (last == 1)
    {
        for (int k = 0; k < pos; k++)
        {
            if (s[k] == '?')
            {
                continue;
            }
            else if (s[k] != t[k])
            {
                first = -1;
            }
        }
    }
    if(last==1&&first==1)
    {
        cout<<"its a match";
    }
    else cout<<"its not a match";
    return 0;
}