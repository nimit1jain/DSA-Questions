#include<iostream>
using namespace std;
int main()
{int arr[8]={7,4,6,1,5,3,9,4};
int currp=INT_MAX;
int profit=0;
for(int i=0;i<8;i++)
{
  if(arr[i]<currp)
  {
      currp=arr[i];

  }
else if((arr[i]-currp)>profit)
{
    profit=arr[i]-currp;
}

}
cout<<profit;
return 0;


}
