#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currS = 0;
    for (int i = 0; i < n; i++)
    {
        currS = 0;
        for (int j = i; j < n; j++)
        {
            currS += arr[j];
            cout << currS << endl;
        }
    }
}