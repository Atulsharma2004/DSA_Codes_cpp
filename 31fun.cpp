#include <bits/stdc++.h>
using namespace std;
int decimalToOctal(int n)
{
    int x = 1, ans = 0;
    while (x <= n)
    {
        x = x * 8;
    }
    x = x / 8;
    while (x > 0)
    {
        int lD = n / x;
        n = n - lD * x;
        x = x / 8;
        ans = ans * 10 + lD;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimalToOctal(n) << endl;
    return 0;
}