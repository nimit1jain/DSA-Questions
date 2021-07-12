#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int top = 0, bottom = 2, left = 0, right = 2;
    int dir = 0;
    while (top <= bottom && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i];
            }
            dir = 1;
            top++;
        }
        else if (dir == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                cout << arr[j][right];
            }
            right--;
            dir = 2;
        }
        else if (dir == 2)
        {
            for (int k = right; k >= left; k--)
            {
                cout << arr[bottom][k];
            }
            bottom--;
            dir = 3;
        }
        else if (dir==3)
        {
            for (int l = bottom; l >= top; l--)
            {
                cout << arr[l][left];
            }
            left++;
            dir = 0;
        }
    }
    return 0;
}