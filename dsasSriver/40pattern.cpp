#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        int space = 2 * n - 2 * i;
        if (i > n)
        {
            stars = 2 * n - i;
            space = 2 * i - 2 * n;
        }
        for (int j = 1; j <= stars; j++) //  Stars
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++) // Space
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++) // Stars
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}