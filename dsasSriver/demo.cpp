#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 4; i++)
    // {
    //     if (i <= 2)
    //         cout << "*" << endl;
    //     else
    //     {
    //         for (int j = 1; j <= 2; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // Space
        {
            cout << " ";
        }
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j <= i; j++) // Star
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j <= 2 * i - 1; j++)
            {
                if (j == 0 || j == 2 * i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}