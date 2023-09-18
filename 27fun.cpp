//------------------------Conversion: Binary to decimal-------------

#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans = ans + x * y;
        x = x * 2;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}