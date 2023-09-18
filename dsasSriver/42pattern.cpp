#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
    return 0;
}