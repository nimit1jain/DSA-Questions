
// C++ program to check if two n-ary trees are
// mirror.
#include <bits/stdc++.h>
using namespace std;

// Function to check given two trees are mirror
// of each other or not
int checkMirrorTree(int M, int N, int u1[ ],
					int v1[ ] , int u2[], int v2[])
	{
		// Map to store nodes of the tree
		unordered_map<int , stack<int>>mp;

		// Traverse first tree nodes
		for (int i = 0 ; i < N ; i++ )
		{
		mp[u1[i]].push(v1[i]);
		}
		
		// Traverse second tree nodes
		for (int i = 0 ; i < N ; i++)
		{
			if(mp[u2[i]].top() != v2[i])
				return 0;
			mp[u2[i]].pop();
		}

		return 1;
	}

// Driver code
int main()
{
	int M = 7, N = 6;
	
	//Tree 1
	int u1[] = { 1, 1, 1, 10, 10, 10 };
	int v1[] = { 10, 7, 3, 4, 5, 6 };

	//Tree 2
	int u2[] = { 1, 1, 1, 10, 10, 10 };
	int v2[] = { 3, 7, 10, 6, 5, 4 };

	if(checkMirrorTree(M, N, u1, v1, u2, v2))
	cout<<"Yes";
	else
	cout<<"No";

	return 0;
}
// #include <bits\stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[12] = {1, 2, 1, 3, 2, 4, 2, 5, 3, 6, 3, 7};
//     int brr[12] = {1, 3, 1, 2, 3, 7, 3, 6, 2, 5, 2, 4};
//     if (sizeof(arr) != sizeof(brr))
//     {
//         cout << "not mirror ";
//     }
//     int i = 0;
//     int k = 0;
//     while (arr[i] == arr[i + 2] && i < 12)
//     {
//         k++;
//         i++;
//     }
//     int ans = 0;

//     int b = 0;
//     for (int j = 4 * k - 1; j >= 0; j=j - 2)
//     {
//         if (brr[j] == arr[b + 1])
//         {
//             ans = 1;
            
//         }
//         else
//         {
//             ans = 0;
        
//         }b = b + 2;
//     }
//     int l = 10;
    
//     if (ans == 1)
//     {
//         for (int j = 4*k; j < 12; j =j+ 2)
//         {
//             if (arr[j] == brr[l] && arr[j + 1] == brr[l + 1])
//             {
//                 ans = 1;
//             }
//             else
//                 ans = 0;
//             l = l - 2;
//         }
//     }
//     if (ans == 1)
//         cout << "yes mirror";
//     else
//         cout << "not mirror";

//     return 0;
// }