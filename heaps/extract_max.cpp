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
int extractmax(int  arr[],int n)
{
    int maxi=arr[0];
    arr[0]=arr[n-1];
    n=n-1;
    heapify(arr,n,0);
    return maxi;
}
// i =index of element you want to increase value of , key is the value
void increase_key(int arr[],int i,int key)
{if(key<arr[i])
{
    cout<<"no increment is possible";
    return;
}
arr[i]=key;
while(i>0&&arr[i/2]<arr[i])
{swap(arr[i/2],arr[i]);
i=i/2;
}


}
int main()
{

    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = (n / 2) - 1;
    // int maxi=extractmax(arr, n);
increase_key(arr,5,10);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout<<"max element is  = "<<maxi<<endl;

    return 0;
}