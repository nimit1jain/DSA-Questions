#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
cout<<"enter the range";
int a;
int b;
cin>>a>>b;
int less=0;
int big=0;
int range=0;
for(int i=0;i<n;i++)
{if(arr[i]<a)
{less++;

}
else if(arr[i]>b)
{
    big++;
}
else{
    range++;
}

}
if(less!=0&&big!=0&&range!=0)
{
    cout<<"the partioning is possible"<<endl;
}
else cout<<"partioning is not possible";
    return 0;
}