// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

vector<int> printKMax(vector<int> &arr, int n, int k)
{
    vector<int> maxi;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        while (!dq.empty() && dq.front() < i - k + 1)
        {
            dq.pop_front();
        }

        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1)
        {
            maxi.push_back(arr[dq.front()]);
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {12, 1, 78, 90, 57, 89, 56};
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Function call
    vector<int> result = printKMax(arr, N, k);

    cout << "Max Subarrays: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}