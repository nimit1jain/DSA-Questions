#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

int arr[3][3] = {{1, 2, 3}, {6, 7, 7}, {7, 8, 9}};
int brr[9];
int k=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        brr[k]=arr[i][j];
        k++;
    }
}sort(brr,brr+9);
for(int i=0;i<9;i++)
{
    cout<<brr[i]<<endl;

}
return 0;
}