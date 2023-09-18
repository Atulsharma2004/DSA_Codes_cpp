//-------------------------- Conversion: Decimal to binary ------------------------------------

#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int n)
{
    int x = 1, ans = 0;
    while (x <= n)
    {
        x = x * 2;
    }
    x = x / 2;
    while (x > 0)
    {
        int lD = n / x;
        n = n - lD * x;
        x = x / 2;
        ans = ans * 10 + lD;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}