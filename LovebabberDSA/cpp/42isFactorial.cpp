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
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}