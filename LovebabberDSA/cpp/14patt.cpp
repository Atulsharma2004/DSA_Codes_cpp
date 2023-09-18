// n=3
// A B C 
// B C D
// C D E

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
         cout<<endl;
     }
    return 0;
}