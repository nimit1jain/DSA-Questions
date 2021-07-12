#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,3,9,5,11};
    int min=0;
    int max=0;
    int i;
    while(i<5)
    {if(arr[min]>arr[i])
    {
        min=i;
    }
    else if(arr[max]<arr[i])
    {
        max=i;
    }
    i++;
    }
cout<<"minimum=  "<<arr[min]<<endl;
cout<<"maximum=  "<<arr[max];
return 0;
}