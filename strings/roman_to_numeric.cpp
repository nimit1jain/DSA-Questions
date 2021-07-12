#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> numeric;
    numeric['I'] = 1;
    numeric['V'] = 5;
    numeric['X'] = 10;
    numeric['L'] = 50;
    numeric['C'] = 100;
    numeric['D'] = 500;
    numeric['M'] = 1000;
    string s;
    int sum = 0;
    cout << "enter the roman number yoou want to convert" << endl;
    cin >> s;
    int n = s.size();
    char ch;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I' && s[i + 1] != 'I')
        {
            sum = sum  -1;
        }
        else
        {ch=s[i];
            sum = sum + numeric[ch];
        }
    }
    cout << "the numeric number is = " << sum << endl;

    return 0;
}