#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch = ch + 1;
    }
    return 0;
}