// n=5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j;
        }
        for(j=1;j<=2*i-2;j++){
            cout<<"*";
        }
        for(j=n-i+1;j>=1;j--){
            cout<<j;
        }
         cout<<endl;
     }
    return 0;
}