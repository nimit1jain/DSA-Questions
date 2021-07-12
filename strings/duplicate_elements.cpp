#include <iostream>
using namespace std;

int main()
{
    string s = "mmmsdfgmfg";
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
            count++;
    }
    cout <<"number of duplicate elents are = "<<count;
    return 0;
}