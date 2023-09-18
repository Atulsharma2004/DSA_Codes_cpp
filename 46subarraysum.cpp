#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, st = -1, en = -1, csum = 0;
    while (j < n && csum + a[j] <= s)
    {
        csum += a[j];
        j++;
    }

    if (csum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        csum += a[j];
        while (csum > s)
        {
            csum -= a[i];
            i++;
        }

        if (csum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
}