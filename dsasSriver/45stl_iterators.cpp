#include <bits/stdc++.h>
using namespace std;

// ----------------- Iterators are used to access the elements of vector or container ------------------------------

void explainIterator()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 3;
    cout << *(it) << " " << endl;
}
 void explainIteratorEnd()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    vector<int>::iterator it = v.end();
    it--;
    cout << *(it) << " ";
}
void explainIteratorFunc()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    cout << v.back() << " " << endl;

    // -------------- Size --------------------------
    cout << v.size() << " " << endl;

    // -------------------- Pop out -------------------
    v.pop_back();
    cout << v[0] << " " << v[4] << endl;

    // ------------- Deletion -----------------------------
    v.erase(v.begin() + 1);
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    v.erase(v.begin() + 1, v.begin() + 3);
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << v.empty() << endl;
}
void explainIteratorSwap()
{
    vector<int> v(2, 100); //{100, 100}
    vector<int> v1(2, 50); //{50, 50}
    v.swap(v1);
    cout << v[0] << " " << v1[0] << endl;
}
void explainIteratorAccess()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

//------------------Short-cut method to iterate using auto ------------------------
void explainIteratorAccess1()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

//------------------Short-cut method to iterate using auto and foreach ------------------------
void explainIteratorAccess2()
{
    vector<int> v(2, 100); //{100, 100}
    v.emplace_back(40);    //{100, 100, 40}

    // -------------Insertion in vector --------------------
    v.insert(v.begin(), 10);     //{10, 100, 100, 40}
    v.insert(v.begin() + 2, 10); //{10, 100, 10, 100, 40}
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    explainIterator();
    explainIteratorEnd();
    explainIteratorFunc();
    explainIteratorSwap();
    explainIteratorAccess();
    explainIteratorAccess1();
    explainIteratorAccess2();
    return 0;
}