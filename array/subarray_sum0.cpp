#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
unordered_map<int,int> mp;
int ans=0;
int sum=0;
for(int i=0;i<n;i++)
{sum=sum+arr[i];
if(sum==0||mp[sum]||arr[i]==0)
{
    ans=1;
    break;
}
else{
    mp[sum]=1;
}
}

if(ans==1)
{
    cout<<"yes";

}
else cout<<"no";
return 0;
}
// its a order of n^2 approach now we will discuss order of n approach
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (sum != 0)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 sum = sum + arr[i] + arr[j];
//                 if (sum == 0)
//                 {
                    
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             break;
//         }
//     }
//     if(sum==0)
// {
// cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }