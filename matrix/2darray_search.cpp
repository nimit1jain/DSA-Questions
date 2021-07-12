#include<iostream>
using namespace std;
int main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b;
cout<<"enter a number you want to find in array";
cin>>b;
int row;
for(int i=0;i<3;i++)
{
if(arr[i][3]>=b&&arr[i][0]<=b)
{
    row=i;
}

}
for(int j=0;j<3;j++)
{
    if(arr[row][j]==b)
    {
        cout<<"true";
    }
    else cout<<"false";
}
return 0;
}