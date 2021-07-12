#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the powers of members";
    for(int i=0;i<n;i++)
    {
cin>>arr[i];
    }
    cout<<"enter the rounds you want to perform = "<<endl;
    int q;
    cin>>q;
    while(q--)
    {
cout<<"entetr the power of bishu in this round = ";
int power;
cin>>power;
int sum=0;
int count=0;
for(int i=0;i<n;i++)
{
    if(power>=arr[i])
    {sum=sum+arr[i];
count++;
    }
}
cout<<"number of memebers bishu killed = "<<count<<endl;
cout<<"sum of total powers= "<<sum<<endl;



    }

return 0;

}