#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
    //-----------------------------Declaration-------------------------------
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v.at(1) << endl;

    //----------------------Inserting in pair -----------------------------------
    vector<pair<int, int>> vec;
    vec.push_back({3, 4});
    vec.emplace_back(1, 2);
}

void explainVector1()
{
    // ------------------- Declearation -------------------------
    vector<int> v(5, 100);
    vector<int> v1(5);
    cout << v[3] << " " << v1[4] << " ";

    //---------------------------Copying a vector -------------------
    vector<int> v2(v);
    cout << v2[3] << endl;
}
int main()
{
    explainVector();
    explainVector1();
    return 0;
}
