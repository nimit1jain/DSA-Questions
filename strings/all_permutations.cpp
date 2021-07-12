#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// isko recursion se bhi  kr sakte hbs thoda dimag lagega jada pr stl se bohot easy ho gaya
int main()
{
string s;
cin>>s;
cout<<s<<endl;
sort(s.begin(),s.end());
while(next_permutation(s.begin(),s.end()))
{
    cout<<s<<endl;
}
return 0;

}





// string permutation(string s,int start,int end)
// {
// end=s.length();
// start=0;
// if(end-start==1)
// {cout<<s<<endl;
//     swap(s[start],s[end]);
//     cout<<s<<endl;
//     start++;
// }
// while(start<end)
// {cout<<s;
// start++;
// permutation(s);
// }



// }

// int main()
// {
    
// return 0;

// }