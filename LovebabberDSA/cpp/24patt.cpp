// n=4
//    1
//   121
//  12321
// 1234321

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
         cout<<endl;
     }
    return 0;
}