#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    int arr[n][m];
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            if (arr[i][j] == 0)
            {
                break;
            }
            else
            {
                count++;
                if (count == m)
                {index=i;
                    break;
                }
            }
        }
    }
    cout<<index<<endl;
    return 0;
}