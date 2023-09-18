// n=9
// 0 1 1 2 3 5 8 13 21 34 55 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,next;
    int a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    
    return 0;
}