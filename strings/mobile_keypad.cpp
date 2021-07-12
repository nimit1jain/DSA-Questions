#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
 unordered_map<char,int> mp;
     string s;
     cin>>s;
     mp['a']=2;
     mp['b']=22;
     mp['c']=222;
     mp['d']=3;
     mp['e']=33;
     mp['f']=333;
     mp['g']=4;
     mp['h']=44;
     mp['i']=444;
     mp['j']=5;
     mp['k']=55;
     mp['l']=555;
     mp['m']=6;
     mp['n']=66;
     mp['o']=666;
     mp['p']=7;
     mp['q']=77;
     mp['r']=777;
     mp['s']=7777;
     mp['t']=8;
     mp['u']=88;
     mp['v']=888;
     mp['w']=9;
     mp['x']=99;
     mp['y']=999;
     mp['z']=9999;
     mp[' ']=0;

    for(int i=0;i<s.length();i++)
    {
        cout<<mp[s[i]];
    }
     
     

return 0;

}