#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;          // ans : minimum available length is 2
    int pd = a[1] - a[0]; // pd : previous diffrence to compare withnext
    int currL = 2;        // currL : current length of the subarray
    int j = 2;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            currL++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            currL = 2;
        }
        j++;
        ans = max(ans, currL);
    }
    cout << ans << endl;
}