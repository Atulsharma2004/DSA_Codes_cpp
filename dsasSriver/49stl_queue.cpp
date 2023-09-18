//A queue is a linear list of elements in which deletions can take place only at one's end called the front, 
//and insertions can take place only at the end called the rear. The queue is a First In First Out type of data structure (FIFO), 
//the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.

#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    for(int i=1;i<=5;i++)
    q.push(i);

    cout<<"The size of the queue: "<<q.size()<<endl;
    cout<<"The front element of the queue: "<<q.front()<<endl;
    cout<<"The last element of the queue: "<<q.back()<<endl;
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    
}

int main(){
    explainQueue();
    return 0;
}