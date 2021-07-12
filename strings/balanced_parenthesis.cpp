#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
// i had made ansewr of a different question which just counts the brackets but this is the problem where we have to find balanced or not so it is done by stack
// int main()
// {
//     string s;
//     cin >> s;
//     map<char, int> mp;
//     // for (int i = 0; i < s.length(); i++)
//     // {
//     //     mp["s[i]"]=0;
//     // }
//     for (int i = 0; i < s.length(); i++)
//     {
//         mp[s[i]]=mp[s[i]]+1;
//     }
    
//     if (mp['['] == mp[']'] && mp['{'] == mp['}']&&mp['(']==mp[')'])
//     {
//         cout <<"true" << endl;
//     }
//     else
//     {
//         cout << "false" << endl;
//     }
//     return 0;
// }