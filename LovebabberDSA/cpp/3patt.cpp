// n=3
// 1 2 3 
// 4 5 6 
// 7 8 9

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             cout<<k<<" ";
             k++;
         }
         cout<<endl;
     }
    return 0;
}