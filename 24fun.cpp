//----------------------Pascal's Tiangle -------------------
//   1
//   1 1
//   1 2 1
//   1 3 3 1
//   1 4 6 4 1

#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}