#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> numbers;
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact * (i );
        numbers.push_back(i);
    }
    numbers.push_back(n);
   
    string ans = "";
    k = k - 1;
    while (true)
    {
        ans = ans + to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + k / fact);
        if (numbers.size() == 0)
            break;
        k = k % fact;
        fact = fact / numbers.size();
    }
    cout << ans;

    return 0;
}