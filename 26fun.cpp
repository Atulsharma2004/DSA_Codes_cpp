//--------------------------- Check wheather given triplet is pythagorean triplet or not ------------------------

#include <bits/stdc++.h>
using namespace std;
bool checkPy(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (checkPy(x, y, z))
    {
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << "Not a pythagorean triplet";
    }
    return 0;
}