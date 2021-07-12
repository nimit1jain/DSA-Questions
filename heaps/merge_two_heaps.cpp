// 19 17 17 16 12 8
// 20 20 19 19 16 15 14 12 10 10 9 8 3
#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
    

    heapify(arr, n, largest);
    }
}
void implementation(int arr[], int n, int start)
{
    for (int i = start; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
int main()
{
    int arr[]={19 ,17 ,17 ,16 ,12 ,8};
    int brr[]={ 20 ,20, 19, 19, 16, 15, 14, 12, 10, 10, 9 ,8, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    int mrg[n+m];
    for(int i=0,j=0;i<n+m;i++)
    {if(i<n)
        mrg[i]=arr[i];
        else
        {mrg[i]=brr[j];
        j++;}
    }
    for(int i =(n+m)/2-1;i>=0;i--)
    {
        heapify(mrg,n+m,i);
    }
   for(int i=0;i<n+m;i++)
   {
       cout<<mrg[i]<<" ";
   }

}