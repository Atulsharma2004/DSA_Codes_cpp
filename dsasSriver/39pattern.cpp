#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) // Star
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) // Space
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // Star
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++) // Star
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * n - 2 * i - 2; j++) // Space
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) // Star
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}