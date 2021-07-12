#include<iostream>
using namespace std;
// this is also a good approach with a single loop
// void rearrange(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             if (i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

int main()
{int k=5;
    int arr[6]={-1,2,3,-4,6,-1};
    for(int i=0;i<6;i++)
    {
        if(arr[i]>0)
        {for(int j=k;j>i;j--)
        {
            if(arr[j]<0)
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                k=j-1;
                break;
            }
        }

        }

}for(int i=0;i<6;i++)
cout<<arr[i]<<endl;
return 0;
}