#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int mindif=INT_MAX;
vector<int> ans1;
vector<int> ans2;
void twar(vector<int> arr,vector<int> cursum,vector<int> othersum,int csum,int osum,int idx)
{
    if(idx==arr.size())
    {
        if(abs(csum-osum)<mindif)
        {
            ans1.clear();
            ans2.clear();
            ans1=cursum;
            ans2=othersum;
            mindif=abs(csum-osum);
        }
    return;
    }
    if(cursum.size()<(arr.size()+1)/2)
    {
        cursum.push_back(arr[idx]);
        
        twar(arr,cursum,othersum,csum+arr[idx],osum,idx+1);
        cursum.pop_back();
    }
    if(othersum.size()<(arr.size()+1)/2)
    {
        othersum.push_back(arr[idx]);
        
        twar(arr,cursum,othersum,csum,osum+arr[idx],idx+1);
        othersum.pop_back();
    }
    
}
int main()
{
    vector<int>  arr;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> cursum;
    vector<int> othersum;
    int csum=0;
    int osum=0;
    twar(arr,cursum,othersum,csum,osum,0);
   
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i];
    }
cout<<" ";
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i];
    }
  
return 0;

}