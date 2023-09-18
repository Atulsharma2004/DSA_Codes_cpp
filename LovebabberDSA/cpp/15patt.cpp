// n=3
// A 
// B B
// C C C

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char k='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";  
        }
        k++;
         cout<<endl;
     }
}