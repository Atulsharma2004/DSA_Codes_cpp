#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0,r;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==temp) cout<<"true";
    else cout<<"false";
}