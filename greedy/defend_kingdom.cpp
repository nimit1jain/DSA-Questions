#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    int coloumn;
    cin>>coloumn;
    vector<pair<int,int>>p;
    cout<<"enter the number of watch towers";
    int t;
    cin>>t;
    cout<<"enter the  positions of towers";
    for(int i=0;i<t;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
                p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    // krlena yrrr easy h abhi man ni kr raha krne ka
return 0;

}