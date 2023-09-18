#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)==0)
    cout<<"Not a prime..........";
    else
    cout<<"Prime..........";
}