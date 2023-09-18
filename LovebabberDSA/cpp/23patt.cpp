// n=4
//  1234
//   234
//    34
//     4

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(j=i;j<=n;j++){
            cout<<j;
        }
         cout<<endl;
     }
    return 0;
}