#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    // code here
    unordered_map<int, int> mp;
    vector<pair<int, int>> vec;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int pair2 = k - arr[i];
        if (mp.find(pair2) != mp.end())
        {
            cnt += mp[pair2];
        }
        mp[arr[i]]++;
    }
    return cnt;
}

int main()
{
    // 7 6 8 4 9 8 4 7 4 4
    int n = 4;
    int k = 6;
    // int arr[15] = {1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5};
    int arr[4] = {1, 5, 7, 1};
    // for (int i = 0; i < 8; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << getPairsCount(arr, n, k);
    return 0;
}