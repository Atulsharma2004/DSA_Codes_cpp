#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         if(i==1 || i==n){
//             for(j=1;j<=i;j++){
//             cout<<"* ";
//             }
//         }
//         else{
//             cout<<"*";
//             for(int j=1;j<=2*i-3;j++){
//                 cout<<" ";
//             }
//             cout<<"*";

//         }

//         cout<<endl;
//     }
    
//     return 0;
// }

int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        if(j==1 || j==n){
            for(j=1;j<=n-i+1;j++){
            cout<<"* ";
            }
        }
        else{
            cout<<"*";
            for(int j=1;j<=2*i-3;j++){
                cout<<" ";
            }
            cout<<"*";

        }
        
        cout<<endl;
    }
    
    return 0;
}
