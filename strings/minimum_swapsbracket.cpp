
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 0;
    int c1 = 0;
    int c2 = 0;
    stack<char> stc;
    if (s.length() & 1)
    {
        cout << "not possible to balance";
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
        {
            stc.push(s[i]);
            c++;
        }
        else if (s[i] == '}' && !stc.empty() && stc.top() == '{')
        {
            stc.pop();
            c1++;
        }
        else if(s[i] == '}' && stc.empty())
            
            {
                c2++;
            }
    }
    int swaps =c-c1+c2;
    cout << "minimum swaps will be = " << swaps << endl;
    return 0;
}