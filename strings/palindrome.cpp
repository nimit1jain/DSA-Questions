#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// one easy way is using stl library first reverse the string and store it in other string then compare both
// int main(){
// string s="iuhfhihwg";
// string s1;
// reverse(s.begin(),s.end());
// if(s1==s)
// {
// cout<<"yes"<<endl;
// }
// else{cout<<"no"<<endl;}
// }

// int main()

// {
//     string s1 = "nimitsgfhftf";
//     int i = 0, count = 0;
//     int j = s1.length() - 1;
//     for (; i < j; i++, j--)
//     {
//         if (s1[i]-s1[j]==0)
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     if (count == (s1.length() / 2))
//     {
//         cout << count << endl;
//     }
//     else
//     {
//         cout << "no"<<endl;
//     }

//     return 0;
// }
int main()
{string str="aabaa";
int i=0;
int j=str.length()-1;
while(i<j)
{
    if(str[i]-str[j]!=0)
    {
        cout<<"its not a pallindrome";
        break;
    }
    i++;j--;
}
cout<<"its a pallindrome";
return 0;
}