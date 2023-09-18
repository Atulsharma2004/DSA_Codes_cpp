#include <bits/stdc++.h>
using namespace std;
int decimalToHexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x = x * 16;
    }
    x = x / 16;
    while (x < 0)
    {
        int lD = n / x;
        n = n - lD * x;
        x = x / 16;
        if (lD <= 9)
        {
            ans = ans + to_string(lD);
        }
        else
        {
            char c = 'A' + lD - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimalToHexadecimal(n) << endl;
    return 0;
}