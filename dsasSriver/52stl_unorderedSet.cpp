//An unordered set in STL is a container that stores unique elements 
//in no particular order. Every operation on an unordered set takes O(1) complexity 
//in the average case and takes O(n) in the worst case.
//Upper_bound and lower_bound functions dosen't work.

#include <bits/stdc++.h>
using namespace std;

void explainUSet(){
    unordered_set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }

    cout<<endl;
    cout << "The size of the set is: " << s.size() << endl;

    int n = 2;
    if (s.find(2)!=s.end())
    cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
      cout << * it << " ";
    }
    cout << endl;

    if (s.empty() == false)
    cout << "The set is not empty " << endl;
    else
    cout << "The set is empty" << endl;
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size()<<endl;

    if (s.empty() == false)
    cout << "The set is not empty " << endl;
    else
    cout << "The set is empty" << endl;
}

void findUSet(){
    unordered_set < int > s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    
    auto pos=s.find(6);
    cout << "The set elements after 6 are: ";
    for (auto it = pos; it != s.end(); it++)
        cout << *it << " ";

    cout<<endl;

    int bsize=s.bucket_count();
    cout<<bsize<<endl;

}

int main(){
    explainUSet();
    findUSet();
    return 0;
}