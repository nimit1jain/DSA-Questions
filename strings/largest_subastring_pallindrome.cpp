#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// this is by recursion but in worst case its complexity reaches 2^n
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int checkpal(string s,int start,int end)
// {
//     while(start<end)
// {
//     if(s[start]-s[end]!=0)
//     {
//         return 0;
        
//     }
    
//     start++;end--;
// }
// return 1;
// }
// int main()
// {
//     string s;
//     cin>>s;
//     int start=0;
//     int end=0;
//     int max=INT_MIN;
//     int length=0;
//     for(int i=0;i<s.length();i++)
//     {
//         for(int j=i+1;j<s.length();j++)
//     {
       
//         length=j-i;
//         if(checkpal(s,i,j)==1&&length>max)
//         {
//             max=length;
//             start=i;
//             end=j;
//         }
//     }
//     }
//     for(int i=start;i<=end;i++)
//     {
//         cout<<s[i];
//     }

// return 0;

// }
void printstring(string s,int start,int length)
{
    for (int i = start; i <= length; i++)
    {
        cout << s[i];
    }
}
void largestpal(string s)
{int end=1;
int start=0;

    for (int i = 0; i < s.length()-1; i++)
    {
        int l = i;
        int h = i+1 ;
        while (l >= 0 && h <= s.length() && s[l] == s[h])
        {
            if(h-l+1>end)
            {
                end=h-l+1;
                start=l;
            }
            l--;
            h++;
        }
    
    
         l = i;
        h = i + 2;
        while (l >= 0 && h <= s.length() && s[l] == s[h])
        {
            if(h-l+1>end)
            {
                end=h-l+1;
                start=l;
            }
            l--;
            h++;
        }
    }
    printstring(s,start,start+end-1);

}

int main()

{
    string s;
    cin>>s;
    
    largestpal(s);
return 0;
}
