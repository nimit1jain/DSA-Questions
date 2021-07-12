#include<iostream>
#include<unordered_map>
using namespace std;
void intersection(int arr[],int brr[],int len1,int len2,int m)
{
unordered_map<int ,int> mp;
int count=0; 
for(int i=0;i<len1;i++)
{
    if(mp[arr[i]]!=1)
    {
        for(int j=0;j<len2;j++)
        {
            if(arr[i]==brr[j])
            {mp[arr[i]]=1;
                count++;
                break;
            }
        }
    }
}

cout<<count<<endl;

}








int main()
{int arr[5]={1,2,3,0,4};
int brr[7]={1,3,4,4,7,8,9};
int m=max(5,4);
intersection(arr,brr,5,7,m);

return 0;
}
