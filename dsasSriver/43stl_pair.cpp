#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
}
void explainPairArr()
{
    pair<int, int> arr[] = {{1, 3}, {2, 5}, {7, 9}};
    cout << arr[2].first << " " << arr[1].second << " " << arr[0].second << endl;
}
void explainNestedPair()
{
    pair<int, pair<int, int>> m = {1, {7, 9}};
    cout << m.first << " " << m.second.first << " " << m.second.second;
}

int main()
{
    explainPair();
    explainPairArr();
    explainNestedPair();
    return 0;
}