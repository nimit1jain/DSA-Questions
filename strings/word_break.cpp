#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<string, int> pp;
int word(string s, vector<string> &arr)
{
    if (s.size() == 0)
    {
        return 1;
    }
    if (pp[s] != 0)
    {
        return pp[s];
    }
    for (int i = 0; i < s.size(); i++)
    {
        int count = 0;
        string k = s.substr(0, i + 1);
        for (int j = 0; j < arr.size(); j++)
        {
            if (k.compare(arr[j]) == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 1 && word(s.substr(i + 1, s.size() - i - 1), arr) == 1)
        {
            return pp[s] = 1;
        }
    }
return pp[s]=-1;
    
}
int main()
{

    vector<string> arr = {"i", "like", "sam", "sung", "samsung", "mobile",
                          "ice", "cream", "icecream", "man", "go", "mango"};
    string s = ("ilikemango");
    int ans = word(s, arr);
    cout<<ans<<endl;
    return 0;
}