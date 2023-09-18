//Double Ended Queue which is also called Deque is a type of queue data structure in 
//which the insertion and deletion of elements can be either in front or rear. 

#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int>dq;
    dq.push_back(3);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(1);
    dq.push_back(1);

    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"The last element of the deque: "<<dq.back()<<endl;

    for(auto it:dq)
    {
        cout<< it <<" ";
    }
    cout<<endl;
}

void popDeque(){
    list <int> dq;
    dq.push_back(3);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(1);
    dq.push_back(1);
    dq.pop_front();
    dq.pop_back();
    for(auto it:dq)
    {
        cout<< it <<" ";
    }
    cout<<endl;
}

int main(){
    explainDeque();
    popDeque();
    return 0;
}