#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int checkstring(char ch[6][6], string s, int i, int j, int size, int index)
{
    int found = 0;
    if (i >= 0 && j >= 0 && i < 6 && j < 6 && s[index] == ch[i][j])
    {
        char temp = s[index];
        ch[i][j] = 0;
        index++;
        if (index == size)
        {
            found =1;
        }
        else
        {
            found +=checkstring(ch, s, i + 1, j, size, index);
            found +=checkstring(ch, s, i - 1, j, size, index);
            found += checkstring(ch, s, i, j + 1, size, index);
            found +=checkstring(ch, s, i, j - 1, size, index);
        }
        ch[i][j] = temp;
    }

    return found;
}
int main()
{
    char ch[6][6] = {{'B', 'B', 'M', 'B', 'B', 'B'},
                     {'C', 'B', 'A', 'B', 'B', 'B'},
                     {'I', 'B', 'G', 'B', 'B', 'B'},
                     {'G', 'B', 'I', 'B', 'B', 'B'},
                     {'A', 'B', 'C', 'B', 'B', 'B'},
                     {'M', 'C', 'I', 'G', 'A', 'M'}}

    ;
    string s = "MAGIC";
    int ans = 0;
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            ans += checkstring(ch, s, i, j, 5, 0);
        }
    }
    cout << "total counts are = " << ans;

    return 0;
}