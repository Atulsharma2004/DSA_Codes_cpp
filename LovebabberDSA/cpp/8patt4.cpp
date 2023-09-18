// n=5
//     1
//    232
//   34543
//  4567654
// 567898765

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        k--;
        for(int j=i;j>1;j--){
            k--;
            cout<<k;
        }
         cout<<endl;
     }
    return 0;
}