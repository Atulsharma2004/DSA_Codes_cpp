// n=8
//               1   
//             1   2
//           1       3
//         1           4
//       1               5
//     1                   6
//   1                       7
// 1   2   3   4   5   6   7   8

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1 || i==n){
            for(int j=1;j<=i;j++){
                cout<<j<<"   ";
            }
        }
        else{
            cout<<"1 ";
            for(int j=1;j<2*i-3;j++){
                cout<<"  ";
            }
            cout<<"  "<<i;
        }
        
         cout<<endl;
     }
    return 0;
}