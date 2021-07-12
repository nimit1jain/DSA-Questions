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
    stack<char> stc;
    if (s.length() & 1)
      {  cout << "not possible";
    return false;}
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
            c--;
        }
        else
            c1++;
    }
    if (c & 1&&c!=0)
    {
        c = (c / 2) + 1;
    }
    else
        c = c / 2;
    if (c1 & 1&&c1!=0)
        c1 = (c1 / 2) + 1;
    else
        c1 = c1 / 2;
    cout << "minimum reversals will be = " << c + c1 << endl;
    return 0;
}