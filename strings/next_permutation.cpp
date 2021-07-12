#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (next_permutation(s.begin(), s.end()) != 0)
    {next_permutation(s.begin(), s.end());
        cout << s<<endl;
    }
    else
    {
        
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}