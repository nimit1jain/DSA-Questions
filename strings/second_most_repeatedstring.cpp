#include <iostream>
#include <unordered_map>
#include<string>
#include<algorithm>
#include<bits\stdc++.h>
using namespace std;

int main()
{

   vector<string> seq= { "ccc", "aaa", "ccc",
                          "ddd", "aaa", "aaa" };
    
    unordered_map<string, int> occ;
    for (int i = 0; i < seq.size(); i++)
        occ [seq[i]]++;

    // find the second largest occurrence
    int first_max = INT_MIN, sec_max = INT_MIN;
    for (auto it = occ.begin(); it != occ.end(); it++)
    {
        if (it->second > first_max)
        {
            sec_max = first_max;
            first_max = it->second;
        }

        else if (it->second > sec_max &&
                 it->second != first_max)
            sec_max = it->second;
    }

    // Return string with occurrence equals
    // to sec_max
    for (auto it = occ.begin(); it != occ.end(); it++)
        if (it->second == sec_max)
           cout<<it->first<<endl;
}