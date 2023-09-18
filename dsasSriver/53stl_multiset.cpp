//A multiset in STL is an associative container just like a set the 
//only difference is it can store duplicate elements in it.

#include <bits/stdc++.h>
using namespace std;

void explainMSet(){
    multiset < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }

    cout<<endl;
    cout << "The size of the set is: " << s.size() << endl;
}

void eraseMset(){
    multiset < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout<<endl;

    //s.erase(1);   Deletes all 1's at a time

    s.erase(s.find(1));

    cout << "Elements present in the set after erasing 1st 1: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
}

int main(){
    explainMSet();
    eraseMset();
    return 0;
}