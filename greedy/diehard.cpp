#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dp[1001][1001];
int wt,ft,at=0;
int diehard(int h,int a,int t,int c)
{
    if(h<=0||a<=0)
    {
        return t;
    }
    if(dp[h][a]!=-1)
    {
        return dp[h][a];
    }
    if(c==1)
    {
     wt=diehard(h-5,a-10,t+1,2);
     ft=diehard(h-20,a+5,t+1,3);
    }
    if(c==2)
    {
       ft=diehard(h-20,a+5,t+1,3);
       at=diehard(h+3,a+2,t+1,1);

    }
    if(c==3)
    {
          at=diehard(h+3,a+2,t+1,1);
         wt=diehard(h-5,a-10,t+1,2);
    }
   
    return dp[h][a]=max(max(at,wt),ft);
}
int main()
{
    int h;
    cin>>h;
    int a;
    cin>>a;
    for(int i=0;i<1001;i++)
    {
        for(int j=0;j<1001;j++)
        dp[i][j]=-1;
    }
    int survival=diehard(h,a,0,3);
    cout<<survival-1<<endl;
return 0;

}