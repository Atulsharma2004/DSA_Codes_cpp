//In the case of the max heap, priority queues are a type of container adaptors, 
//specifically designed such that its first element is always the greatest of the elements 
//it contains and the rest elements are in decreasing order.

//Note: In C++ STL by default max-heap is created.

#include <bits/stdc++.h>
using namespace std;

void explainPQueue(){
    priority_queue<int> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);

    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

//In the case of the min heap, priority queues are a type of container adaptors, 
//specifically designed such that its first element is always the smallest of the elements it contains and 
//the rest elements are in increasing order.

void minHeapQueue(){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=5;i++)
    pq.push(i);

    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main(){
    explainPQueue();
    minHeapQueue();
    return 0;
}