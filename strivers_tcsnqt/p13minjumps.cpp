#include <iostream>
#include <vector>

using namespace std;

int minJumps(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
    {
        return 0; // Already at the end or only one element.
    }

    if (arr[0] == 0)
    {
        return -1; // Cannot move from the starting position.
    }

    int maxReach = arr[0]; // Maximum index we can reach from the current position.
    int steps = arr[0];    // Steps left at the current position.
    int jumps = 1;         // Number of jumps required to reach the current position.

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jumps; // Reached the end of the array.
        }

        maxReach = max(maxReach, i + arr[i]);
        steps--;

        if (steps == 0)
        {
            jumps++;

            if (i >= maxReach)
            {
                return -1; // Cannot reach the end.
            }

            steps = maxReach - i;
        }
    }

    return -1; // Cannot reach the end.
}

int main()
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int result = minJumps(arr);

    if (result != -1)
    {
        cout << "Minimum number of jumps: " << result << endl;
    }
    else
    {
        cout << "Cannot reach the end." << endl;
    }

    return 0;
}
