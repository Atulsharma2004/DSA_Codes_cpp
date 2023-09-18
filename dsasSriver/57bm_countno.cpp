#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=0;
    while(n>0){
        // int ld=n%10;
        cnt++;
        n=n/10;
    }
    return cnt;
}

int count1(int n){
    int cnt= (int)(log10(n)+1);
    
    return cnt;
}

int count2(int n){
    int cnt= floor(log10(n)+1);
    
    return cnt;
}

int count3(int n){
    string x = to_string(n);
    
    return x.length(); 
}

int main(){
    int n;
    cin>>n;
    // cout<<count(n);
    //cout<<count1(n);
    //cout<<count2(n);
    cout<<count3(n);
}