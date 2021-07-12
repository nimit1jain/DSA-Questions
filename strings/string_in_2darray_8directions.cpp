#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int checkstring(char ch[3][4], string s, int i, int j, int size, int index, int diag)
{
    int found = 0;
    if (s[index] == ch[i][j])
    {
        char temp = s[index];
        ch[i][j] = 0;
        index++;
        if (index == size)
        {
           return found = 1;
        }
        else
        {
            if (diag == 0)
            {
                found += checkstring(ch, s, i + 1, j, size, index, 0);
                found += checkstring(ch, s, i - 1, j, size, index, 0);
                found += checkstring(ch, s, i, j + 1, size, index, 0);
                found += checkstring(ch, s, i, j - 1, size, index, 0);
             found += checkstring(ch, s, i + 1, j + 1, size, index, 1);
            found += checkstring(ch, s, i + 1, j - 1, size, index, 2);
            found += checkstring(ch, s, i - 1, j - 1, size, index, 3);
            found += checkstring(ch, s, i - 1, j + 1, size, index, 4);
            
            }
            else if (diag == 1)
            {
                found += checkstring(ch, s, i + 1, j + 1, size, index, 1);
            }
            else if (diag == 2)
            {
                found += checkstring(ch, s, i + 1, j - 1, size, index, 2);
            }
            else if (diag == 3)
            {
                found += checkstring(ch, s, i - 1, j - 1, size, index, 3);
            }
            else if (diag == 4)
            {
                found += checkstring(ch, s, i - 1, j + 1, size, index, 4);
            }
        }
        ch[i][j] = temp;
    }

    return found;
}
int main()
{
    char ch[3][4] = {{'a', 'b', 'a', 'a'}, 
                     {'a', 'b', 'e', 'b'},
                     {'e', 'b', 'e', 'e'}};
    string s = "abe";
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ans += checkstring(ch, s, i, j, 3, 0, 0);
        }
    }
    cout << "total counts are = " << ans;

    return 0;
}