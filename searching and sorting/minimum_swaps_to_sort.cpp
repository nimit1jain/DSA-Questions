#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
vector<pair<int,int>> vi(n);
for(int i=0;i<n;i++)
{
    vi[i]= make_pair( arr[i],i);

}int c=0;
sort(vi.begin(),vi.end());
for(int i=0;i<n;i++)
{if(vi[i].second!=i)
{
    swap(vi[i],vi[vi[i].second]);
    c++;
    i--;

}

}
 cout<<c;   
return 0;

}