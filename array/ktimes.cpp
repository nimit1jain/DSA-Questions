#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}int k;
cout<<"enter k"<<endl;
    cin>>k;
    int x=n/k;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    cout<<"[";
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second > x)
        {
            cout<<(*it).first<<" ";
        }
    }
    cout<<"]";
return 0;

}