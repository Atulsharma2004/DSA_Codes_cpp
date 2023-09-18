#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,r,pro=1;
    
    cin>>n;
    
    while(n!=0){
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }
    cout<<pro-sum<<endl;
    
    return 0;
}