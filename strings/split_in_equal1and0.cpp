#include <string>
#include <iostream>
using namespace std;
// take example of 1001100110
int equalsubstring(string s)
{
    int count = 0;
    int n = s.length();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            x++;
        }
        else
        {
            y++;
        }
        if (x == y)
        {
            count++;
        }
    }
    if (count == 0)
        return -1;
    else
        return count;
}
int main()
{
    string s;
    cin >> s;
    cout << equalsubstring(s) << endl;
    return 0;
}
// dhyan se padha kr question usne bs number of such pairs maanga tha
// int main()
// {
//  string s;
//  cin>>s;
//  int end=0;
//  int i=0;
// while(end<s.length())
// {    int start=i;

//     if(s[i]==s[i+1])
//  {   end=start++;
// }
// else{
//     end++;
//     for(i=start;i<end)
//     {
//         cout<<s[i]<<" ";
//         i=i+2;
//     }
// }

// }
// return 0;

// }