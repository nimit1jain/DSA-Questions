#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{cout<<"how many intervals you want to give ";
int n;
cin>>n;
    vector<pair<int,int>> vi;
    cout<<"enter the intervals";
    int x,y;
for(int i=0;i<n;i++)
{cin>>x>>y;
vi.push_back({x,y});

}
int idx=0;
for(int i=1;i<n;i++)
{
    if(vi[idx].second>vi[i].first)
    {
        vi[idx].second=max(vi[idx].second,vi[i].second);
    
    }
else{
    idx++;
    vi[idx]=vi[i];
}
}
sort(vi.begin(),vi.end());
cout<<"which smallest element you want to get";

int k;
cin>>k;
for(int i=0;i<=idx;i++)
{
    if(k>(vi[i].second-vi[i].first+1))
    {
        k=k-vi[i].second-vi[i].first+1;
    }
    else
    {cout<<vi[i].first+k-1<<endl;
    break;
    }
}
return 0;

}