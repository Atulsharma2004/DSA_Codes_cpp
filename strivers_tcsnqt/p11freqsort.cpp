#include <bits/stdc++.h>
using namespace std;

bool sortele(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
void Frequency(int arr[], int n)
{
    int i;
    vector<int> v;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    vector<pair<int, int>> vec;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        vec.push_back({it->first, it->second});
    }
    sort(vec.begin(), vec.end(), sortele);
    for (int i = 0; i < vec.size(); i++)
    {
        while (vec[i].second > 0)
        {
            cout << vec[i].first << " ";
            vec[i].second--;
        }
    }
    cout << endl;
}

int main()
{
    // 7 6 8 4 9 8 4 7 4 4
    int n = 10;
    // int arr[15] = {1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5};
    int arr[10] = {7, 6, 8, 4, 9, 8, 4, 7, 4, 4};
    // for (int i = 0; i < 8; i++)
    // {
    //     cin >> arr[i];
    // }
    Frequency(arr, n);
    return 0;
}