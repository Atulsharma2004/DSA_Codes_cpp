#include <bits/stdc++.h>
using namespace std;

void explainList(){
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.push_front(7);
    ls.emplace_front(1);
    cout<<"The 1st Element of list: "<<ls.front()<<endl;
    cout<<"The size of the list is: "<<ls.size()<<endl;
    cout<<"The last element of the list: "<<ls.back()<<endl;

    for(auto it:ls)
    {
        cout<< it <<" ";
    }
    cout<<endl;
    
}

void reverseList(){
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.push_front(7);
    ls.emplace_front(1);
    ls.reverse();
    for(auto it:ls)
    {
        cout<< it <<" ";
    }
    cout<<endl;
}

void popList(){
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.push_front(7);
    ls.emplace_front(1);
    ls.pop_front();
    ls.pop_back();
    for(auto it:ls)
    {
        cout<< it <<" ";
    }
    cout<<endl;
}

void sortList(){
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
    ls.push_front(7);
    ls.emplace_front(1);
    ls.sort();
    for(auto it:ls)
    {
        cout<< it <<" ";
    }
    
}


int main(){
    explainList();
    reverseList();
    popList();
    sortList();
    return 0;
}