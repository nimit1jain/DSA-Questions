#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{string s;
cout<<"enter the string";
cin>>s;

    int num1=stoi(s.substr(0,3));
    int num2=stoi(s.substr(3,3));
    int num3=stoi(s.substr(6,3));
    int num4=stoi(s.substr(9,2));
    if(num1<=255&&num2<=255&&num3<=255&&num4<=255)
    cout<<num1<<"."<<num2<<"."<<num3<<"."<<num4<<endl;
    
     num1=stoi(s.substr(0,3));
     num2=stoi(s.substr(3,3));
     num3=stoi(s.substr(6,2));
     num4=stoi(s.substr(8,3));
    if(num1<=255&&num2<=255&&num3<=255&&num4<=255)
    cout<<num1<<"."<<num2<<"."<<num3<<"."<<num4<<endl;
    


     num1=stoi(s.substr(0,3));
     num2=stoi(s.substr(3,2));
     num3=stoi(s.substr(5,3));
     num4=stoi(s.substr(8,3));
    if(num1<=255&&num2<=255&&num3<=255&&num4<=255)
   {cout<<num1<<"."<<num2<<"."<<num3<<"."<<num4<<endl;
   
   }



     num1=stoi(s.substr(0,2));
     num2=stoi(s.substr(2,3));
     num3=stoi(s.substr(5,3));
     num4=stoi(s.substr(8,3));
    if(num1<=255&&num2<=255&&num3<=255&&num4<=255)
    cout<<num1<<"."<<num2<<"."<<num3<<"."<<num4<<endl;
    

return 0;

}