// n=3
// A A A 
// B B B
// C C C

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char k='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<k<<" ";  
        }
        k++;
         cout<<endl;
     }
}