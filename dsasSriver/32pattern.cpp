#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // Space
        {
            cout << j;
        }
        for (int j = 0; j < 2 * n - 2 * i; j++) // Star
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) // Space
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}