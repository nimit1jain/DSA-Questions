#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        unordered_map<int,int> mp;
        for(int i=0;i<row.size();i++)
        {
            mp[row[i]]=i;
        }
        int swaps=0;
        for(int i=0;i<row.size();i+=2)
        {
            int first=row[i];
            // int second;
            // if(first%2==0)
            //     second=first+1;
            // else second=first-1;
            int second= first+(row[i]%2==0 ? 1: -1);
            cout<<first<<" "<<second<<" "<<row[i+1]<<" ";
            if(row[i+1]!=second)
            {int k=i+1;
            int l=mp[second];
                swap(row[i+1],row[mp[second]]);
                swaps++;
                
                mp[row[k]]=l;
                mp[row[l]]=k;
                cout<<mp[second]<<" "<<endl;
                // cout<<swaps<<" "<<i<<endl;
            }
           
            
        }
        return swaps;
    }
};
int main()
{
    /* Let us create the example graph discussed above */
  vector<int> arr={0,2,4,6,7,1,3,5};
Solution b;
cout<<b.minSwapsCouples(arr);
cout<<arr[7];
    return 0;
}