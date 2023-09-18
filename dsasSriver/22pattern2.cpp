#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // Space
        {
            cout << " ";
        }
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n - i; j++) // Star
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j <= n - 2 * i; j++)
            {

                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}