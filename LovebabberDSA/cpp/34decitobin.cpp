#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,bit;
    cin>>n;
    int i=0;
    int ans=0;
    
    while(n!=0){
        // r=n%2;
        // ans=(r*pow(10,i))+ans;
        // n=n/2;

        bit=n&1;
        ans=ans+(bit*pow(10, i));
        n=n >> 1;
        i++;
    }
    cout<<ans;
    return 0;

}

