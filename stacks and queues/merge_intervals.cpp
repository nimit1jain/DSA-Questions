#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     vector<pair<int, int>> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     sort(v.begin(), v.end());
//     stack<pair<int, int>> s;
//     s.push({v[0].first, v[0].second});
//     for (int i = 0; i < n; i++)

//     {
//         int start1 = s.top().first;
//         int end1 = s.top().second;
//         int start2 = v[i].first;
//         int end2 = v[i].second;
//         if (end1 < start2)
//         {
//             s.push({start2, end2});
//         }
//         else
//         {
//             s.pop();
//             end1 = max(end1, end2);
//             s.push({start1, end1});
//         }
//     }
//         while (!s.empty())
//         {
//             cout << s.top().first << " " << s.top().second << endl;
//             s.pop();
//         }
//     return 0;
// }
int main()
{
    vector<pair<int,int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int index=0;
    int i=1;
    while(i<n)
    {
        if(v[index].second<v[i].first)
        {
            index++;
            v[index].first=v[i].first;
            v[index].second=v[i].second;
            i++;
        }
        else{
            v[index].second=max(v[index].second,v[i].second);
            i++;
        }
    }
    for(int i=0;i<=index;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// struct Interval {
// 	int start, end;
// };

// bool compareInterval(Interval i1, Interval i2)
// {
// 	return (i1.start < i2.start);
// }

// int main()
// {
// 	Interval arr[]
// 		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	sort(arr, arr + n, compareInterval);

// 	// cout << "Intervals sorted by start time : \n";
// 	// for (int i = 0; i < n; i++)
// 	// 	cout << "[" << arr[i].start << "," << arr[i].end
// 	// 		<< "] ";

//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i].end>arr[i+1].start&&arr[i].end>arr[i+1].end)
//         {arr[i+1]=arr[i];

//         }
//         else if(arr[i].end>arr[i+1].start)
//         {
//             arr[i+1].start=arr[i].end;
//         }

//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i].start<<" "<<arr[i].end<<endl;
//     }

// 	return 0;
// }
