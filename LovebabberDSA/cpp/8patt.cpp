// n=4
// 1 
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=n;j++){
            cout<<k<<" ";
            k++;
        }
         cout<<endl;
     }
    return 0;
}