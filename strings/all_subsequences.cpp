#include <bits/stdc++.h>
/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int counti=0;
void subsequence(string t, int i, int n, int m, string s, string ans)
 {   if (i == n)
    {

        if (ans.compare(t) == 0)
        {
            
            counti=1;
            return;
        }
        else
        return;
        
    }
    else
    {
        subsequence(t, i + 1, n, m, s, ans);
        t = t + s[i];
        subsequence(t, i + 1, n, m, s, ans);
    }
}
int main()
{
    string s;
    cin >> s;
    int t;
    cin >> t;
    vector<string> v;
    while (t--)
    {
        string t;
        cin >> t;
        v.push_back(t);
    }
    for (int k = 0; k < v.size(); k++)
    {

        subsequence("", 0, s.length(), t, s, v[k]);
        if(counti==1)
        {
            cout<<"POSITIVE"<<endl;
        }
        else cout<<"NEGATIVE"<<endl;
        counti=0;
        
    }
    return 0;
}
// void subsequence(string t,int i,int n,string s)
// {if(i==n)
// {
//     cout<<t<<endl;
// }
// else{
//     subsequence(t,i+1,n,s);
//     t=t+s[i];
//     subsequence(t,i+1,n,s);
// }

// }
// int main()
// {
//     string s;
//     cin>>s;
//     subsequence("",0,s.length(),s);

// return 0;

// }