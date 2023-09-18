#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact=1;
    while(n!=1){
        fact=n*fact;
        n--;
    }
    return fact;

}
int nCr(int n, int r){
    int num=factorial(n);
    int den = factorial(r)*factorial(n-r);
    return num/den;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);
}